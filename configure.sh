#!/bin/bash


###############################################################################
##	Preparation script for compiling The Lords of War
##
###############################################################################

cd libtcod
make -f makefiles/makefile-linux
ln -s libtcod.so libtcod.so.1
ln -s libtcodxx.so libtcodxx.so.1
cd ..

mkdir build
cd build
cmake ..
make

