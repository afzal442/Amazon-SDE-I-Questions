#!/bin/python

import math
import os
import random
import re
import sys


#
# Complete the 'findRestaurants' function below.
#
# The function is expected to return a 2D_INTEGER_ARRAY.
# The function accepts following parameters:
#  1. 2D_INTEGER_ARRAY allLocations
#  2. INTEGER numRestaurants
#

def findRestaurants(allLocations, numRestaurants):
    f = allLocations
    s = []
    j = 0
    k = 0
    t = []
    d = [0 for i in range(numRestaurants)]
    for i in f:
        x = i[0]*i[0] + i[1]*i[1]
        s.append(int(math.sqrt(x)))
    t = sorted(s)
    for j in range(len(s)):    
        if s[j]<t[numRestaurants] and k < numRestaurants:
            d[k] = f[j]
            k = k + 1
            j = j + 1
        else:
            j = j + 1
    return d
    # Write your code here

if __name__ == '__main__':
