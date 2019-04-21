#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 204 205 206
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 3 7 8 10 12
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03
