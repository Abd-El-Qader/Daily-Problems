def solve():
    X, Y, K = [int(x) for x in input().split()] 
    ans = int()
    while X != Y:
        if( X < Y):
            X, Y = Y, X
        X //= K
        ans += 1
    print(ans)

t = int(input())
while t:
    solve()
    t -= 1
