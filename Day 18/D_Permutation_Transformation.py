from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, Counter
from bisect import bisect_left
def solve():
    n = int(input())
    lst = [int(x) for x in input().split()]
    depth = [0]*n
    def dfs(l,r,th):
        if l < 0 or r >= n or l > r:
            return
            
        ind = int()
        mx = 0
        for i in range(l,r+1):
            if lst[i] > mx:
                ind = i
                mx = lst[i]
        th += 1
        depth[ind] = th
        dfs(ind+1,r,th)
        dfs(l,ind-1,th)

    dfs(0,n-1,-1)
    print(*depth)
t = int(input())
while t:
    solve()
    t -= 1
