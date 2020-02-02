#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countApplesAndOranges function below.
def countApplesAndOranges(s, t, a, b, apples, oranges):
    apples = [x + a for x in apples]
    oranges = [y + b for y in oranges]
    
    count_app = 0
    count_ora = 0
    for apple in apples:
        if apple >= s and apple <= t:
            count_app += 1
    for orange in oranges:
        if orange >= s and orange <= t:
            count_ora += 1
    
    print(count_app)
    print(count_ora)


if __name__ == '__main__':
    st = input().split()

    s = int(st[0])

    t = int(st[1])

    ab = input().split()

    a = int(ab[0])

    b = int(ab[1])

    mn = input().split()

    m = int(mn[0])

    n = int(mn[1])

    apples = list(map(int, input().rstrip().split()))

    oranges = list(map(int, input().rstrip().split()))

    countApplesAndOranges(s, t, a, b, apples, oranges)
