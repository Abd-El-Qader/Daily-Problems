from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict
from bisect import bisect_left

def solve():
    n, q = map(int,input().split()) 
    a = [int(x) for x in input().split()]
    b = [int(x) for x in input().split()]

    result = list()
    mx = max(a[-1],b[-1])
    for i in range(n-1,-1,-1):
        mx = max(mx,a[i],b[i])
        result.append(mx)

    result.append(0)
    result.reverse()

    pfx = [0]*(n+1)
    for i in range(1,n+1):
        pfx[i] += pfx[i-1] + result[i]

    while q:
        l, r = map(int,input().split())
        print(pfx[r] - pfx[l-1],end=' ')
        q -= 1
    print()

t = int(input())
while t:
    solve()
    t -= 1
