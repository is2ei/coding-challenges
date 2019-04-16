#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./sample-output ./a.out<sample-input
cat sample-output
