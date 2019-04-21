#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 1 2 3
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 4 2 5 1 3
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# OUTPUT_PATH=./output-07 ./a.out<input-07
# cat output-07
