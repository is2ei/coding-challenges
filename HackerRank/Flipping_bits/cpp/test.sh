#!/usr/bin/env bash

g++ main.cpp

# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected output
# 2147483648
# 4294967294
# 4294967295
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected output
# 4294967291
# 4294843839
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected output
# 4294967295
# 3492223820
# 4259365872
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02
