N, K = [int(x) for x in input().split()]
# note that A is zero indexd mean A[i]*(i+1)
def dfs(i,s,A):
    if i == N-1:
        if (K - s) % N == 0:
            A[i] = (K - s) // N
            print(*A)
        return
    for j in range((K - s) // (i+1)+1):
        A[i] = j
        dfs(i+1,s+(i+1)*A[i],A)

dfs(0,0,[0]*N)

