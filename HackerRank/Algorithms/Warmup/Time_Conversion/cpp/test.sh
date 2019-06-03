#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 19:05:45
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 19:05:45
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 19:05:45
OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

# Expected Output
# 00:00:00
OUTPUT_PATH=./custom-output-01 ./a.out<custom-input-01
cat custom-output-01

# Expected Output
# 12:45:54
OUTPUT_PATH=./output-04 ./a.out<input-04
cat output-04

# Expected Output
# 23:59:59
OUTPUT_PATH=./output-09 ./a.out<input-09
cat output-09
