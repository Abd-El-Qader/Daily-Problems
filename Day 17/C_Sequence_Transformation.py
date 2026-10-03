from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, Counter
from bisect import bisect_left

def solve():
    n = (input())
    lst = [int(x) for x in input().split()]
    base = []
    tmp = None
    for e in lst:
        if e == tmp:
            continue
        tmp = e
        base.append(e)

    cnt = Counter(base)
    cnt[base[0]] -= 1
    cnt[base[-1]] -= 1
    print(min(cnt.values())+1)
t = int(input())
while t:
    solve()
    t -= 1
