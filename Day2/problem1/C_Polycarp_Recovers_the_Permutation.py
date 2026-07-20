def solve():
    n = int(input()) 
    l = [int(x) for x in input().split(" ")]
    ind = l.index(max(l))

    if ind != 0 and ind != n-1:
        print("-1")
        return
    print(*l[::-1])

t = int(input())
while t:
    solve()
    t -= 1
