#!/bin/sh -e

docker build --target development --tag shiin/clion-remote:0.0.1 .
HOSTNAME=$(hostname -f)
docker run --detach --cap-add sys_ptrace --privileged \
    --publish 127.0.0.1:2222:22 \
    --hostname "clion-remote.${HOSTNAME}" \
    --name clion_remote \
    shiin/clion-remote:0.0.1
