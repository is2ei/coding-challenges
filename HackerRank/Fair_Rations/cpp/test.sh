#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# NO
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01
