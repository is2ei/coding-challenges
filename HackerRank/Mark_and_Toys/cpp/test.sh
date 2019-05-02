#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 3
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 3
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 4
OUTPUT_PATH=./output-00 ./a.out<input-00
cat output-00

# Expected Output
# 19
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03

# Expected Output
# 3
OUTPUT_PATH=./output-16 ./a.out<input-16
cat output-16

# Expected Output
# 3
OUTPUT_PATH=./output-17 ./a.out<input-17
cat output-17
