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
        str = input()
        if N < 4:
            print("NO")
        else:
            #print(str[0:4])
            #print(str[len(str)-4: len(str)-1])
            if str[0:4] == "2020" or str[N-4: N] == "2020":
                print("YES")
            elif str[0]+str[N-3: N] == "2020":
                print("YES")
            elif str[0:2]+str[N-2: N] == "2020":
                print("YES")
            elif str[0:3]+str[N-1] == "2020":
                print("YES")
            else:
                print("NO")
        