#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./sample-output ./a.out<sample-input
cat sample-output

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02
