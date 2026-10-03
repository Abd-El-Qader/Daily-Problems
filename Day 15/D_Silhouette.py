from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict
from bisect import bisect_left

def solve():
    n = int(input()) 
    b = [int(x) for x in input().split()]
    st = set()

    freq = defaultdict(int)
    for i in b:
        st.add(i)
        freq[i] += 1

    if freq[0] == 0:
        print(-1)
        return

    lst = sorted(list(st))
    mp = defaultdict(int)

    reminder = 0
    for i in range(1,len(lst)):
        temp = int(lst[i] - reminder)  
        if temp%freq[lst[i-1]]:
            print(-1)
            return

        mp[lst[i-1]] = int(temp/freq[lst[i-1]])
        reminder += temp
        
    if len(lst) == 1:
        mp[lst[-1]] = 1
    else:
        mp[lst[-1]] = mp[lst[-2]]+1

    l = list()
    for i in mp.items():
        l.append(i)

    l = sorted(l)
    print(l,file=stderr)
    mx = 0
    for i in l:
        if i[1] < mx:
            print(-1)
            return
        mx = i[1]

    for i in b:
        print(int(mp[i]),end=' ')

    print()

t = int(input())
while t:
    solve()
    t-=1