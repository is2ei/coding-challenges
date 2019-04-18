#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 200
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 10
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 31
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 7542539201
# OUTPUT_PATH=./output-04 ./a.out<input-04
# cat output-04

# Expected Output
# 2497169732
# OUTPUT_PATH=./output-07 ./a.out<input-07
# cat output-07
