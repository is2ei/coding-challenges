#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 2
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 0
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 1
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 633
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 492
OUTPUT_PATH=./output-04 ./a.out<input-04
cat output-04
