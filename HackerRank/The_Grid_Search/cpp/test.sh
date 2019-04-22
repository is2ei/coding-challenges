#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected Output
# YES
# NO
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# YES
# YES
# NO
# YES
# NO
OUTPUT_PATH=./output-05 ./a.out<input-05
cat output-05
