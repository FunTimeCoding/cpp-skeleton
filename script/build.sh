#!/bin/sh -e

rm -rf build
script/check.sh --ci-mode
script/measure.sh --ci-mode
script/test.sh --ci-mode
g++ -std=c++11 src/boilerplate.cpp -o build/bp

if [ "${1}" = --run ]; then
    build/bp
fi

#SYSTEM=$(uname)
#
# TODO: Needs polish.
#if [ "${SYSTEM}" = Linux ]; then
#    script/debian/package.sh
#    script/docker/build.sh
#fi
