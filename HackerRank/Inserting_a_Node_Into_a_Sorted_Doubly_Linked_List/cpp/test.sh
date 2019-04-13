#!/usr/bin/env bash

g++ main.cpp

OUTPUT_PATH=./custom-output-00 ./a.out<custom-input-00
cat custom-output-00

OUTPUT_PATH=./sample-output-00 ./a.out<sample-input-00
cat sample-output-00

OUTPUT_PATH=./sample-output-01 ./a.out<sample-input-01
cat sample-output-01

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

OUTPUT_PATH=./sample-output-02 ./a.out<sample-input-02
cat sample-output-02

# Expected Output
#-+-+-+-+-+-
# 1 1 2 2 5 6 9 10 11 12 15 22 22 22 25 27 28 30 31 31 31 33 34 35 35 36 37 37 39 40 42 43 47 49 52 53 53 53 55 55 57 59 61 65 65 66 67 68 70 75 76 77 77 78 79 81 83 84 85 85 85 86 86 88 89 90 91 91 91 92 92 94 95 96 99 
# 7 11 19 20 21 25 29 29 29 38 41 42 43 46 48 50 51 55 55 59 59 66 66 67 67 68 70 73 76 76 86 97 
# 49 57 60 
# 23 54 57 59 59 64 77 
# 7 7 8 28 32 33 39 48 48 53 55 62 64 66 68 68 76 81 87 88 90 91 92 94 94 95 97 
# 1 3 8 9 11 12 15 21 23 24 26 32 34 35 36 40 45 48 49 54 55 55 59 60 61 64 69 71 74 74 80 83 86 89 91 96 97 98 99 99 
# 13 18 23 24 36 39 39 60 70 76 84 93 
# 7 8 21 21 25 30 35 39 42 48 52 60 61 64 67 81 82 99 99 
# 2 5 5 9 11 12 13 13 14 17 21 24 28 28 30 31 32 35 35 39 40 52 54 59 59 61 62 64 66 73 74 74 75 78 80 81 81 84 85 86 90 95 97 97 99 99 
# 1 3 3 3 4 7 8 9 9 10 10 11 12 15 15 15 16 16 18 18 20 22 23 24 26 27 27 29 30 32 32 33 33 34 35 36 36 36 37 38 40 42 42 42 43 44 44 46 46 48 53 55 58 59 59 60 62 62 64 64 64 66 67 67 68 70 71 71 73 74 79 81 81 81 82 83 85 86 86 88 88 88 89 92 95 
# 1 2 4 4 5 7 7 8 11 11 12 12 13 13 15 16 17 18 19 20 20 23 25 28 29 33 34 34 36 36 37 37 38 39 40 44 45 45 47 47 48 49 51 51 51 52 52 54 54 55 57 57 58 62 62 63 63 65 65 68 68 69 70 70 71 72 72 74 74 76 78 79 82 82 82 83 83 84 84 87 87 88 88 88 91 91 93 95 95 96 96 97 98 98 99 99 99 100 100 
# 1 8 10 10 12 13 15 18 18 20 21 22 24 24 25 26 26 29 29 30 31 32 33 34 35 37 37 37 39 39 40 41 41 42 43 43 47 49 50 50 51 55 56 56 56 58 58 61 61 62 62 62 63 65 66 66 66 68 69 69 73 73 74 75 75 76 76 80 82 85 85 86 87 88 92 94 94 94 94 94 95 96 98 100 
# 3 3 4 9 10 11 11 12 13 13 16 16 17 18 18 19 19 21 24 24 25 25 25 26 26 30 31 31 31 35 37 37 38 42 42 42 43 43 44 44 45 45 46 47 47 47 48 48 49 50 51 53 54 56 57 59 59 61 63 63 64 65 67 67 68 68 69 69 70 70 72 72 72 73 74 77 79 79 80 82 86 86 89 90 93 95 96 97 98 99 100 
# 9 14 41 48 54 54 60 66 89 90 95 97 
#-+-+-+-+-+-
OUTPUT_PATH=./output-02 ./a.out<input-02
cat output-02
