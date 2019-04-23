#!/usr/bin/env bash

g++ main.cpp

# Expected Output
#-.-.-.-.-
# 12.0
# 8.0
# 5.0
# 4.5
# 5.0
# 6.0
#-.-.-.-.-
# OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
# cat sample-output-00

OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# OUTPUT_PATH=./output-03 ./a.out<input-03
# cat output-03
