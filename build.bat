@mkdir build
@mkdir bin
@cd build
@cmake -G "NMake Makefiles" ..
@nmake
@copy .\xinglang.exe ..\bin\
@cd ..
@rd .\build /S /Q