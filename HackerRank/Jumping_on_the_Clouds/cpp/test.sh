#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./output-01 ./a.out<sample-input-01
cat output-01

OUTPUT_PATH=./output-02 ./a.out<sample-input-02
cat output-02
