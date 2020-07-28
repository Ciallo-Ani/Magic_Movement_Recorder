#!/bin/bash

clear

cmake zydis -B zydis

cmake zydis/dependencies/zycore -B zydis/dependencies/zycore

cmake -B CMake

make -C CMake -s

mkdir Output 2>/dev/null

mv CMake/libMagic_Recode.so Output/Magic_Recode.dll