def solve():
    n, m = (int(x) for x in input().split(' '))
    if n&1^1 and m&1 or n > m:
        print('NO')
        return

    print("YES")
    if(n&1):
        print(1 + (m - n),end=' ')
        for i in range(1,n):
            print(1,end=' ')
        print()
        return

    print(1 + int((m - n)/2),end=' ')
    print(1 + int((m - n)/2),end=' ')
    for i in range(2,n):
        print(1,end=' ')
    print()

t = int(input())
while t:
    solve()
    t -= 1
