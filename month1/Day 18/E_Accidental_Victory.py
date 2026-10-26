from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, Counter
from bisect import bisect_left,bisect_right
from itertools import accumulate

def solve():
    n = int(input())
    lst = [int(x) for x in input().split()]
    
    data = lst
    data = sorted(data)
    def at(l,i):
        num = l[i]
        indx = bisect_right(data,num) - 1
        return indx
    
    pfx = list(accumulate(data))    
    ans = []

    limit = 0
    for ind in range(n-1):
        if data[ind+1] > pfx[ind]:
            limit = ind+1
            
    for i in range(n):
        ind = at(lst,i) 
        if ind >= limit:
            ans.append(i+1)

    print(len(ans))
    print(*ans)

t = int(input())
while t:
    solve()
    t -= 1
