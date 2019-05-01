#!/usr/bin/env bash

g++ main.cpp

# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected Output
# 3
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 3
# OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
# cat sample-output-01

# Expected Output
# 3
# OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
# cat sample-output-02

# Expected Output
# 3
OUTPUT_PATH=./output-00 ./a.out<input-00
cat output-00

# Expected Output
# 3
OUTPUT_PATH=./output-01 ./a.out<input-01
cat output-01

# Expected Output
# 3
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# 46
OUTPUT_PATH=./output-04 ./a.out<input-04
cat output-04
