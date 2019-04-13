#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02