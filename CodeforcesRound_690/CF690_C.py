# -*- coding: utf-8 -*-
"""
Created on Fri Dec  4 10:05:20 2020

@author: MH9130


1
12
123
13
2
23
3



"""
def inlt():
    return(list(map(int,input().split())))

arr = []
L = 10
    
def rec(val, ind, _str):
    for x in range(val, L):
        _str += str(x)
        arr.append(_str)
        rec(x + 1, ind, _str)
        _str = _str[:-1]

def digit_sum(arr):
    _sum = 0
    for i in range(len(arr)):
        _sum += int(arr[i])
    return _sum    

def digit_sum_int(val):
    _sum = 0
    while val > 0:
        _sum += val % 10
        val = int(val/10)
    
    return _sum

if __name__ == "__main__":
    
    for l in range(1, L):
        rec(l, 0, "")
    arr = [int(i) for i in arr] 
    arr.sort()
    
    m = dict()
    for val in arr:
        k = digit_sum_int(val)
        if k not in m:
            m[k] = val
    
    #for x, y in m.items():
    #    print(x,y)
    
    T = int(input())
    for t in range(0, T):
        x = int(input())
        if x > 45:
            print("-1")
            continue
        print(m[x])
        