#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# Yes
OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

# Expected Output
# Yes
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# Yes
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# No
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
# Yes
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02

# Expected Output
# Yes
OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03

# Expected Output
# Yes
OUTPUT_PATH=./output-06 ./a.out<input-06
cat output-06
