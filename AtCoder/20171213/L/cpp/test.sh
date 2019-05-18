#!/usr/bin/env bash

g++ main.cpp

# Expected Output
# 1:3
# 2:9
# 3:4
./a.out<sample-input-01

# Expected Output
# 1:1
# 2:0
./a.out<sample-input-02

# Expected Output
# 1:4
# error
./a.out<sample-input-03

# Expected Output
# 1:100
# 2:1000
# 3:10000
# 4:100000
# 5:1000000
# 6:10000000
# 7:100000000
./a.out<sample-input-04
