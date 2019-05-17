#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 4
OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

# Expected Output
# 1
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 2
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 2
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02
