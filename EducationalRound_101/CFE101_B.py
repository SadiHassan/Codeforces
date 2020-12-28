# -*- coding: utf-8 -*-
"""
Created on Fri Dec  4 10:05:20 2020

@author: MH9130


"""
ans = 0
def inlt():
    return(list(map(int,input().split())))

def rec(arr1, arr2, i, j, _sum):
    global ans 
    ans = max(ans, _sum)
    if i + 1 <= len(arr1):
        rec(arr1, arr2, i + 1, j, _sum + arr1[i])
    if j + 1 <= len(arr2):
        rec(arr1, arr2, i , j + 1, _sum + arr2[j])
    
if __name__ == "__main__":
    T = int(input());
    for t in range(T):
        n = int(input())
        arr1 = inlt()
        m = int(input())
        arr2 = inlt()
        ans = 0
        rec(arr1, arr2, 0, 0, 0)
        '''
        i = 0
        j = 0
        _sum = 0
        ans = 0
        while i < n and j < m:
            if arr1[i] >= arr2[j]:
                _sum += arr1[i]
                ans = max(_sum, ans)
                i += 1
            else:
                _sum += arr2[j]
                ans = max(_sum, ans)
                j += 1
            print(_sum)
            if _sum < 0:
                _sum = 0
        
        while i < n:
            _sum += arr1[i]
            ans = max(ans, _sum)
            if _sum < 0:
                _sum = 0
            i += 1
        while j < m:
            _sum += arr2[j]
            ans = max(ans, _sum)
            if _sum < 0:
                _sum = 0
            j += 1
        '''
        print(ans)