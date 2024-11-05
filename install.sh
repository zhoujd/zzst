#!/bin/bash

SCRIPT_ROOT=$(cd $(dirname "${BASH_SOURCE[0]}") && pwd)

install_dep() {
    sudo apt install -y libx11-dev libxft-dev libxinerama-dev
    echo "Install dep done"
}

build() {
    local projects=(
        $SCRIPT_ROOT/src
    )
    for proj in ${projects[@]}; do
        echo "Build $proj"
        make -C $proj clean
        make -C $proj
        sudo make -C $proj install
        echo "Build $proj done"
    done
    echo "Build done"
}

all() {
    install_dep
    build
    echo "Install all done"
}

usage() {
    app=$(basename $0)
    cat <<EOF
$app {dep|build|-b|all|-a}
dep          --    Install build dependence
build|-b     --    Build all
all|-a       --    Install all
EOF
}

case $1 in
    dep )
        install_dep
        ;;
    build|-b )
        build
        ;;
    all|-a )
        all
        ;;
    * )
        usage
        ;;
esac
