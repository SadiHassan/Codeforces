# -*- coding: utf-8 -*-
"""
Created on Fri Dec  4 10:05:20 2020

@author: MH9130


"""
def inlt():
    return(list(map(int,input().split())))


if __name__ == "__main__":
    T = int(input());
    for t in range(T):
        s = input()
        tot_questions = 0
        first = True
        for i in range(len(s)):
            if s[0] == ')' or s[len(s)-1] == '(':
                first = False
                break;
            if s[i] == '?':
                tot_questions += 1
        if first == False or tot_questions % 2 != 0:
            print("NO")
        else:
            print("YES")
