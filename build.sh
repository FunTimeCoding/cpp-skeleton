#!/bin/sh -e

./run-style-check.sh --ci-mode
clear
mkdir -p build
g++ -std=c++11 src/boilerplate.cpp -o build/bp

if [ "${1}" = "--run" ]; then
    build/bp
fi
