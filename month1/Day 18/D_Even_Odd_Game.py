from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, Counter
from bisect import bisect_left

def solve():
    n = int(input())
    lst = [int(x) for x in input().split()]
    lst = sorted(lst)
    lst.reverse()
    diff = int() 

    for i in range(n):
        if i % 2 and lst[i] % 2:
            diff -= lst[i]
        elif i &1^1 and lst[i] &1^1: 
            diff += lst[i] 
    if not diff:
        print('Tie')
    elif diff > 0:
        print('Alice')
    else:
        print('Bob')
t = int(input())
while t:
    solve()
    t -= 1
