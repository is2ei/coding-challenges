#!/usr/bin/env bash

g++ main.cpp

# Expected Output
#-.-.-.-.-.-
# 1 2 4 5 5
# 1 2 4 4 5
# 1 2 3 4 5
#-.-.-.-.-.-
./a.out<custom-input-00

# Expected Output
#-.-.-.-.-.-
# 2 4 6 8 8
# 2 4 6 6 8
# 2 4 4 6 8
# 2 3 4 6 8
#-.-.-.-.-.-
./a.out<sample-input-00
