#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 5
# OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
# cat sample-output-00

# Expected Output
# 8
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 15
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03
