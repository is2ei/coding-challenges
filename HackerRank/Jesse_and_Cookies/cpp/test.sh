#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 2
# OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
# cat sample-output-00

# Expected Output
# -1
OUTPUT_PATH=./output-00 ./a.out<input-00
cat output-00

# Expected Output
# 0
# OUTPUT_PATH=./output-02 ./a.out<input-02
# cat output-02

# Expected Output
# 5
# OUTPUT_PATH=./output-03 ./a.out<input-03
# cat output-03

# Expected Output
# 1
# OUTPUT_PATH=./output-04 ./a.out<input-04
# cat output-04

# Expected Output
# 17595
# OUTPUT_PATH=./output-05 ./a.out<input-05
# cat output-05

# Expected Output
# OUTPUT_PATH=./output-10 ./a.out<input-10
# cat output-10
