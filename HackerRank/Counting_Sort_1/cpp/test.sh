#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 1 2 1 1 2
OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# OUTPUT_PATH=./output-01 ./a.out<input-01
# cat output-01
