#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 12
# 9
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 13
# 13
# 13
# 13
# 13
OUTPUT_PATH=./output-06 ./a.out<input-06
cat output-06
