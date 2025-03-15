#!/bin/bash

SCRIPT_ROOT=$(cd $(dirname "${BASH_SOURCE[0]}") && pwd)
CORE_ROOT=$(cd $SCRIPT_ROOT && pwd)
CORE_TOP=$(cd $CORE_ROOT/.. && pwd)

install_dep() {
    echo "Install apt pkg"
    sudo apt update
    sudo apt install -y make gcc g++
    sudo apt install -y libx11-dev libxft-dev libxinerama-dev
    sudo apt install -y libgd-dev
    echo "Install dep done"
}

install_bin() {
    local target=/usr/local/bin
    local apps=(
        $CORE_ROOT/bin/editscreen
        $CORE_ROOT/bin/pagescreen
        $CORE_ROOT/bin/sterm
    )
    for app in ${apps[@]}; do
        sudo cp -fv $app $target
    done
    echo "Install bin done"
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
    install_bin
    build
    echo "Install all done"
}

usage() {
    app=$(basename $0)
    cat <<EOF
Usage: $app {dep|build|-b|all|-a}
dep          --    Install build dependence
bin          --    Install bin
build|-b     --    Build all
all|-a       --    Install all
EOF
}

case $1 in
    dep )
        install_dep
        ;;
    bin )
        install_bin
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
