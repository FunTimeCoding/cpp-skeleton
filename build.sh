#!/bin/sh -e

clear
mkdir -p build
g++ -std=c++11 src/boilerplate.cpp -o build/bp

if [ "${1}" = "--run" ]; then
    build/bp
fi
