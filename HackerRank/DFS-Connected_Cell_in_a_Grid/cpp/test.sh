#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 5
# OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
# cat sample-output-00

# Expected Output
# 8
# OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
# cat sample-output-01

# Expected Output
# 10
# OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
# cat sample-output-02

# Expected Output
# 29
OUTPUT_PATH=./output-06 ./a.out<input-06
cat output-06
