#!/usr/bin/env bash

g++ main.cpp

# ./a.out<custom-input-00

# Expected 
#-.-.-.-.-
# YES 1
# YES 9
# YES 99
# NO
# NO
# NO
# NO
#-.-.-.-.-
# ./a.out<sample-input-00

# Expected 
#-.-.-.-.-
# YES 999
# YES 7
# YES 98
# NO
#-.-.-.-.-
# ./a.out<sample-input-01

# Expected 
#-.-.-.-.-
# YES 9007199254740992
# YES 4503599627370496
# YES 2251799813685248
# YES 1125899906842624
# YES 562949953421312
# NO
# NO
# NO
# NO
# NO
#-.-.-.-.-
./a.out<input-04
