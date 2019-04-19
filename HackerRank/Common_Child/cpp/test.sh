#!/usr/bin/env bash

g++ main.cpp

# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected Output
# 2
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 0
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 3
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 15
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 155
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03

# Expected Output
# 1417
OUTPUT_PATH=./output-05 ./a.out<input-05
cat output-05
