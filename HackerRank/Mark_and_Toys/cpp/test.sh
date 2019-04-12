#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./output-00 ./a.out<sample-input-00
cat output-00

OUTPUT_PATH=./output-01 ./a.out<sample-input-01
cat output-01

OUTPUT_PATH=./output-02 ./a.out<sample-input-02
cat output-02

# Expected Output
# 19
OUTPUT_PATH=./output-03 ./a.out<sample-input-03
cat output-03