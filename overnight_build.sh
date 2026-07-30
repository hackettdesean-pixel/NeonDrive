#!/data/data/com.termux/files/usr/bin/bash

set -o pipefail

LOG="overnight_build.log"

echo "=== NeonDrive Overnight Build Started ===" | tee $LOG
date | tee -a $LOG

rm -rf build

mkdir build

cd build || exit 1

cmake .. 2>&1 | tee -a ../$LOG

if [ ${PIPESTATUS[0]} -ne 0 ]; then
    echo "CMAKE FAILED" | tee -a ../$LOG
    exit 1
fi

cmake --build . -j2 2>&1 | tee -a ../$LOG

if [ ${PIPESTATUS[0]} -ne 0 ]; then
    echo "BUILD FAILED" | tee -a ../$LOG
    exit 1
fi

echo "=== BUILD SUCCESSFUL ===" | tee -a ../$LOG
date | tee -a ../$LOG
