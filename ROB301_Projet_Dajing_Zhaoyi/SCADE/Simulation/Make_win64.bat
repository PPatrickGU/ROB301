@SET PATH=D:/tools/ANSYS Inc/v202/SCADE/SCADE/../contrib/Msys64/mingw64/bin;%PATH%
@SET INCLUDE=D:/tools/ANSYS Inc/v202/SCADE/SCADE/../contrib/Msys64/mingw64/include
@SET LIB=D:/tools/ANSYS Inc/v202/SCADE/SCADE/../contrib/Msys64/mingw64/lib
@IF "-B"=="%1" SET ARG=%1
gcc -print-search-dirs
@"D:/tools/ANSYS Inc/v202/SCADE/SCADE/../contrib/Msys64/mingw64/bin/mingw32-make.exe" -j 4 -f Makefile_win64 %ARG%
