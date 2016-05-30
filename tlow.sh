#!/bin/bash

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./libtcod
if [ ! -h ./libtcod/libtcod.so.1 ]; then
    ln -s libtcod.so ./libtcod/libtcod.so.1
fi
if [ ! -h ./libtcod/libtcodxx.so.1 ]; then
    ln -s libtcodxx.so ./libtcod/libtcodxx.so.1
fi
if [ ! -h ./libtcod/libtcodgui.so.1 ]; then
    ln -s libtcodgui.so ./libtcod/libtcodgui.so.1
fi


./source/tlow
