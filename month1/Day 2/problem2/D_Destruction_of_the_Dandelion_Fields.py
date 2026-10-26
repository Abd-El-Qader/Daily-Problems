def solve():
    n = int(input())
    l = [int(x) for x in input().split(" ")]
    odd_s = len([x for x in l if x&1])
    evens = len([x for x in l if x&1^1])

    if not odd_s:
        print(0)
        return

    ans = sum(l)
    l = sorted(l)
    odd_s = int(odd_s/2) 
    i = 0

    while odd_s and i < n:
        if l[i]&1:
            odd_s -= 1
            ans -= l[i]
        i += 1

    print(ans)

t = int(input())
while t:
    solve()
    t -= 1
