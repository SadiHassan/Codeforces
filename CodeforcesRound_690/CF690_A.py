# -*- coding: utf-8 -*-
"""
Created on Fri Dec  4 10:05:20 2020

@author: MH9130
"""
def inlt():
    return(list(map(int,input().split())))
 

if __name__ == "__main__":
    
    T = int(input())
    
    for t in range(T):
        N = int(input())
        
        ans = []
        arr = inlt()
        i = 0
        j = len(arr) - 1
        while i <= j:
            ans.append(arr[i])
            if i < j:
                ans.append(arr[j])
            i += 1
            j -= 1
        print(" ".join(map(str, ans)))