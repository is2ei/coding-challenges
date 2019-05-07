#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 3
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 49
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 4960
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# 5008
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03
