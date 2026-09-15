from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, Counter
from bisect import bisect_left

def solve():
    n = int(input())
    tm = int(n ** .5)
    ans = [1]

    for i in range(2,tm+1):
        cnt = 0 
        while n % i == 0:
            if cnt == len(ans):
                ans.append(1)
            n //= i
            ans[cnt] *= i
            cnt += 1
    if n > 1:
        ans[0] *= n

    ans.reverse()
    print(len(ans))
    print(*ans)
    
t = int(input())
while t:
    solve()
    t -= 1
