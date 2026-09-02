N, M = [int(x) for x in input().split()]
A = [int(x) for x in input().split()] 
B = [int(x) for x in input().split()] 

# we are suppose that we have resulted A
j = int()
ans = N
for r in range(2):
    now = 0
    x = r
    for i in range(N):
        if A[i] != x:
            now += 1
        if i < N-1:
            x = (B[i] - x)%2
    ans = min(ans,now)

print(ans)