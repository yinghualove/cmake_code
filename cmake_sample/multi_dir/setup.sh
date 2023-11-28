#!/bin/bash
function help(){
    echo
    echo "Usage: setup.sh [param]"
    echo "[param]:               "
    echo " build                 "
    echo " clean                 "
}

build()
{
    echo "create build dir"
    mkdir build
    cd build 
    cmake ..
    make
    echo "make finished!"
}

clean()
{
    echo "remove build"
    rm -rf build
}

param=$1

if [ "$param" = "--help" ] ; then
help
fi

if [ "$param" = "" ] ; then
help
fi

if [ "$param" = "build" ] ; then
build
fi

if [ "$param" = "clean" ] ; then
clean
fi


