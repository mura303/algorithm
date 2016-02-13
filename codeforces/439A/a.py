#!python

import sys
import io

n, d = map( int, raw_input().split())

data = map( int, raw_input().split())

resttime = (n-1)*10

if d < resttime + sum(data):
    print -1
else:
    print (d - sum(data) )/ 5


