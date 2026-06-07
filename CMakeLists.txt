cmake_minimum_required(VERSION 3.16)
project(GamePluginLoader LANGUAGES CXX ASM_MASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "Building universal proxy DLL (rename output to winmm.dll, version.dll, dinput8.dll, dsound.dll, dxgi.dll, or dbghelp.dll)")

# ── Static core ───────────────────────────────
add_library(LoaderCore STATIC
    PluginLoader.cpp
)
target_include_directories(LoaderCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# ── Assemble ASM files (custom commands avoid ml64.exe forward-slash /Fo bug) ──
set(P "${CMAKE_CURRENT_SOURCE_DIR}/proxy")

set(ASM_OBJ_UNIVERSAL "${CMAKE_CURRENT_BINARY_DIR}/proxy_universal.obj")
set(ASM_OBJ_DBGHELP   "${CMAKE_CURRENT_BINARY_DIR}/proxy_dbghelp.obj")

add_custom_command(
    OUTPUT  "${ASM_OBJ_UNIVERSAL}"
    COMMAND ml64.exe /c /nologo "/Fo${CMAKE_CURRENT_BINARY_DIR}\\proxy_universal.obj" "${P}/proxy_universal.asm"
    DEPENDS "${P}/proxy_universal.asm"
    COMMENT "Assembling proxy_universal.asm"
)
add_custom_command(
    OUTPUT  "${ASM_OBJ_DBGHELP}"
    COMMAND ml64.exe /c /nologo "/Fo${CMAKE_CURRENT_BINARY_DIR}\\proxy_dbghelp.obj" "${P}/proxy_dbghelp.asm"
    DEPENDS "${P}/proxy_dbghelp.asm"
    COMMENT "Assembling proxy_dbghelp.asm"
)
add_custom_target(AssembleStubs DEPENDS "${ASM_OBJ_UNIVERSAL}" "${ASM_OBJ_DBGHELP}")

# ── Universal Proxy DLL ───────────────────────
add_library(ProxyDLL SHARED
    proxy/dllmain_universal.cpp
    proxy/ProxyCore.cpp
    proxy/proxy_universal.cpp
    proxy/proxy_universal.def
    proxy/proxy_dbghelp.cpp
    proxy/proxy_dbghelp.def
    "${ASM_OBJ_UNIVERSAL}"
    "${ASM_OBJ_DBGHELP}"
)

set_source_files_properties(
    "${ASM_OBJ_UNIVERSAL}"
    "${ASM_OBJ_DBGHELP}"
    PROPERTIES
        EXTERNAL_OBJECT TRUE
        GENERATED       TRUE
)

add_dependencies(ProxyDLL AssembleStubs)

target_include_directories(ProxyDLL PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/proxy
)
target_link_libraries(ProxyDLL PRIVATE LoaderCore)

set_target_properties(ProxyDLL PROPERTIES
    OUTPUT_NAME              "stproxy"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output"
)

