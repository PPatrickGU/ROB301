@SET PATH=D:/Program Files/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/bin;%PATH%
@SET INCLUDE=D:/Program Files/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/include
@SET LIB=D:/Program Files/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"D:/Program Files/ANSYS Inc/v211/SCADE Student/SCADE/../contrib/Msys64/mingw64/bin/mingw32-make.exe" -j 4 -f Makefile_win64 %ARG%
