#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 1 3 3
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# -1
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 1 1 1
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 2 3 3
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# 72 81 97
OUTPUT_PATH=./output-04 ./a.out<input-04
cat output-04

# Expected Output
# 1000000000 1000000000 1000000000
OUTPUT_PATH=./output-11 ./a.out<input-11
cat output-11
