def solve():
    n = int(input())
    pile = []
    for i in range(n):
        pile.append([int(x) for x in input().split()])

    ans = int()
    for l in pile:
        if l[0] > l[2]:
            ans += l[0]-l[2]
        if l[1] > l[3]:
            ans += l[1]-l[3]
            ans += min(l[0],l[2])

    print(ans)
    
    
t = int(input())
while t:
    solve()
    t -= 1
