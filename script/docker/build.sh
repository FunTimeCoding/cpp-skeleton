#!/bin/sh -e

DIRECTORY=$(dirname "${0}")
SCRIPT_DIRECTORY=$(
    cd "${DIRECTORY}" || exit 1
    pwd
)
# shellcheck source=/dev/null
. "${SCRIPT_DIRECTORY}/../../configuration/project.sh"

docker images | grep --quiet "${VENDOR_NAME_LOWER}/${PROJECT_NAME_DASH}" && FOUND=true || FOUND=false

if [ "${FOUND}" = true ]; then
    docker rmi "${VENDOR_NAME_LOWER}/${PROJECT_NAME_DASH}"
fi

docker build --target production --tag "${VENDOR_NAME_LOWER}/${PROJECT_NAME_DASH}" .
