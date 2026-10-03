from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict
from bisect import bisect_left


def solve():
    ### the main idea is make max mex of a,b = 1 if is possible and make c mex = 0 
    n = int(input())
    a = [int(x) for x in input().split()]

    c0 = 0
    for i in range(len(a)):
            if a[i] == 0:     
                if c0 == 0:
                    a[i] = 1
                else:
                    a[i] = 0
                c0 += 1
            else:
                a[i] = 2

    if c0 == 0 or c0 >= 2:
        print("YES")

    else:
        print("NO")
        return

    for e in a:
        print(chr(ord('A')+e),end='')

    print()



t = int(input())
while t:
    solve()
    t -= 1
