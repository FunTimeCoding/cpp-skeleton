#!/bin/sh -e

script/docker/development/stop.sh
docker rm clion_remote
ssh-keygen -f "${HOME}/.ssh/known_hosts" -R "[localhost]:2222"
