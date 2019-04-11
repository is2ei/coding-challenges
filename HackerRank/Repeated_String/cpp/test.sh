#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./output-01 ./a.out<sample-input-01
cat output-01

OUTPUT_PATH=./output-02 ./a.out<sample-input-02
cat output-02

OUTPUT_PATH=./output-03 ./a.out<sample-input-03
cat output-03

OUTPUT_PATH=./output-04 ./a.out<sample-input-04
cat output-04
