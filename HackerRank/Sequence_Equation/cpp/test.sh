#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01
