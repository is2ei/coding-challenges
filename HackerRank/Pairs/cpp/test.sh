#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 80
OUTPUT_PATH=./output-00 ./a.out<input-00
cat output-00
