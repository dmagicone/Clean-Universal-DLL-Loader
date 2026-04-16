cmake_minimum_required(VERSION 3.16)
project(GamePluginLoader LANGUAGES CXX ASM_MASM)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message(STATUS "Building universal proxy DLL (rename output to winmm.dll, version.dll, dinput8.dll, or dsound.dll)")

# ── Static core ───────────────────────────────
add_library(LoaderCore STATIC
    PluginLoader.cpp
)
target_include_directories(LoaderCore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# ── Universal Proxy DLL ───────────────────────
add_library(ProxyDLL SHARED
    proxy/dllmain_universal.cpp
    proxy/ProxyCore.cpp
    proxy/proxy_universal.cpp
    proxy/proxy_universal.asm
    proxy/proxy_universal.def
)
target_include_directories(ProxyDLL PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/proxy
)
target_link_libraries(ProxyDLL PRIVATE LoaderCore)
set_target_properties(ProxyDLL PROPERTIES
    OUTPUT_NAME "stproxy"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output"
)

# ── Example mod DLL ───────────────────────────
add_library(ExamplePlugin SHARED
    example_plugin/ExamplePlugin.cpp
)
target_include_directories(ExamplePlugin PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(ExamplePlugin PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output/stplugins"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/output/stplugins"
)
