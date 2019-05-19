#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 13
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 11
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 15
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 151598486
OUTPUT_PATH=./output-00 ./a.out<input-00
cat output-00

# Expected Output
# 7412694
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01
