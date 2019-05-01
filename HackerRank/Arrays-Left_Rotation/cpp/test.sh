#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 5 1 2 3 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 77 97 58 1 86 58 26 10 86 51 41 73 89 7 10 1 59 58 84 77
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 77 97 58 1 86 58 26 10 86 51 41 73 89 7 10 1 59 58 84 77
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 87 97 33 47 70 37 8 53 13 93 71 72 51 100 60
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02
