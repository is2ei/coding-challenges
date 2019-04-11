#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./output ./a.out<sample-input
cat output

OUTPUT_PATH=./output-02 ./a.out<sample-input-02
cat output-02
