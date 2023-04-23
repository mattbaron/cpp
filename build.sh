#!/bin/bash

set -e

make clean
make
echo ------------------------------------------------------------
./cpp
