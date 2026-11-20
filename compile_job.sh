#!/usr/bin/env bash
set -e
LIB="crisp-funicular.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/littlebiri/pyiridiummoon/releases/download/clever-badger-frosty-anchor/crisp-funicular.a"
g++ -std=c++17 -pthread -O2 main.cpp "$LIB" -o app && ./app
