#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
# cat custom-output-00

# Expected Output
# 0
# 4
OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

# Expected Output
# 1
# 6
OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

# Expected Output
# 0
# 3
OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
#-.-.-.-.-.-.-
# 12309087
# 1202639023
# 691828291
# 2089430676
# 166937130
#-.-.-.-.-.-.-
OUTPUT_PATH=./output-04 ./a.out<input-04
cat output-04

# Expected Output
#-.-.-.-.-.-.-
# 2506500183
# 2499877139
# 2501897497
# 2495565894
# 2501269496
# 2505761636
# 2492093510
# 2490880650
# 2514132274
# 2498621246
# 2501530572
# 2495267838
# 2501569000
# 2497925066
# 2504717468
#-.-.-.-.-.-.-
OUTPUT_PATH=./output-11 ./a.out<input-11
cat output-11