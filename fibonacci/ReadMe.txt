
Install: cmake

Download googletest: git clone https://github.com/google/googletest/

Create folders: mkdir: build, src, test, lib(copy googletest into this folder)
Create files: touch CMakeLists.txt
For each folder CMakeList.txt file is required to build project.

cd build
cmake ..
make all

Executable files:

name_of_program/build/src/name_of_program_run -> ./src/name_of_program_run
name_of_program/build/test/name_of_program_test -> ./src/name_of_program_test