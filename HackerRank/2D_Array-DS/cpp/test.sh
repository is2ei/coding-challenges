#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 19
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 13
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 28
OUTPUT_PATH=./output-08 ./a.out<input-08
cat output-08
