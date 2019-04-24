#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 5
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 96190959
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# 15685693751
OUTPUT_PATH=./output-09 ./a.out<input-09
cat output-09
