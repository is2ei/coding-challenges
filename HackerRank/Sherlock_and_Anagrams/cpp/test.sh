#!/usr/bin/env bash

g++ main.cpp

# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# -.-.-.-.-.-.-.-
# 166650
# 4832
# 166650
# 13022
# 166650
# 9644
# 6346
# 166650
# 8640
# 11577
# -.-.-.-.-.-.-.-
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03
