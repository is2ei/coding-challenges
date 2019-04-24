#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 13
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 15
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 29
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 163578911
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 30352414
# OUTPUT_PATH=./output-02 ./a.out<input-02
# cat output-02

# Expected Output
# 46361218
# OUTPUT_PATH=./output-03 ./a.out<input-03
# cat output-03
