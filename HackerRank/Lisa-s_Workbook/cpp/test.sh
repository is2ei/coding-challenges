#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 11
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# 100
OUTPUT_PATH=./output-06 ./a.out<input-06
cat output-06
