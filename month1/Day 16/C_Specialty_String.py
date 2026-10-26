from sys import setrecursionlimit,stderr
from collections import namedtuple, defaultdict, deque
from bisect import bisect_left

def solve():
    n = int(input()) 
    s = input()
    stack = deque()
    for i in s:
        if stack and stack[0] == i:
            stack.popleft()
        else :
            stack.appendleft(i)

    if not stack:
        print("YES")
        return
    print("NO")
t = int(input())
while t:
    solve()
    t -= 1
