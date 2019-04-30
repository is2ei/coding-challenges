#!/usr/bin/env bash

g++ main.cpp

./a.out<custom-input-00

# Expected Output
# BAD SET
# aabcde
# ./a.out<sample-input-00

# Expected Output
# BAD SET
# aacghgh
# ./a.out<sample-input-01

# Expected Output
# BAD SET
# d
./a.out<input-01
