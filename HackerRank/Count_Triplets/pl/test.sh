#!/usr/bin/env bash

# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected Output
# 2
OUTPUT_PATH=./sample-output-00 ./main.pl<sample-input-00
cat sample-output-00

# Expected Output
# 6
OUTPUT_PATH=./sample-output-01 ./main.pl<sample-input-01
cat sample-output-01

# Expected Output
# 4
OUTPUT_PATH=./sample-output-02 ./main.pl<sample-input-02
cat sample-output-02

# Expected Output
# 161700
OUTPUT_PATH=./output-02 ./main.pl<input-02
cat output-02

# Expected Output
# 166661666700000
OUTPUT_PATH=./output-03 ./main.pl<input-03
cat output-03

# Expected Output
# 2325652489
OUTPUT_PATH=./output-06 ./main.pl<input-06
cat output-06

# Expected Output
# 1339347780085
# OUTPUT_PATH=./output-10 ./main.pl<input-10
# cat output-10

# Expected Output
# 1667018988625
# OUTPUT_PATH=./output-11 ./main.pl<input-11
# cat output-11
