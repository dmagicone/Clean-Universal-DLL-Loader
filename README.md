A "CLEAN" x64 DLL plugin loader designed for maximum compatibility and zero VirusTotal flags. At the time of release, it's listed with zero. While many loaders show possible false positives, this tool is built to be lightweight and functional. Supports games using the following libraries:

winmm.dll

version.dll

dinput8.dll

dsound.dll

dxgi.dll




Rename stproxy.dll to whichever proxy name the game needs:

    winmm.dll
    version.dll
    dinput8.dll
    dsound.dll
    dxgi.dll



Build (x64):

    cmake -S . -B build -G "Visual Studio 17 2022" -A x64
    
    mkdir build\ProxyDLL.dir\Release\proxy
    
    cmake --build build --config Release

Output:
    build\output\stproxy.dll

Example:
    copy build\output\stproxy.dll to the game folder
    rename it to winmm.dll or other proxy the game supports
    place dllload.txt next to it and edit with dll files you want loaded. 
    place your payload DLLs next to it

