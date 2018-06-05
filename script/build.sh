#!/bin/sh -e

rm -rf build
script/check.sh --ci-mode
g++ -std=c++11 src/boilerplate.cpp -o build/bp

if [ "${1}" = --run ]; then
    build/bp
fi
