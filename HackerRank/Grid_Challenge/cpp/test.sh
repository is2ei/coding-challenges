#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./output-03 ./a.out<input-03
cat output-03
