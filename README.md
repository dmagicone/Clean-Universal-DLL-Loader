
<img width="1584" height="470" alt="Clean-Universal-DLL-Loader" src="https://github.com/user-attachments/assets/c0d01e32-b701-41a5-8122-e4c474bd1686" />


A "CLEAN" x64 DLL plugin loader designed for maximum compatibility. This tool is built to be lightweight and functional. Supports games using the following libraries:

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

Place the dllload.txt in the same folder as the loader. Edit the txt file to include any dll files you want to load.





Build Instuctions (x64):

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

