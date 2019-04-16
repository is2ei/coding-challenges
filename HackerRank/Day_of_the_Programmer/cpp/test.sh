#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# 13.09.1917
OUTPUT_PATH=./output-10 ./a.out<input-10
cat output-10

# Expected Output
# 26.09.1918
OUTPUT_PATH=./output-59 ./a.out<input-59
cat output-59
