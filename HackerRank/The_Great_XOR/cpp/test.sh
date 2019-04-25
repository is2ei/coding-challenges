#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 1
# 5
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 2
# 27
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 2
# 27
# OUTPUT_PATH=./sample-output-01 ./a.out<input-06
# cat output-06
