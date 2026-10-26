from sys import setrecursionlimit
setrecursionlimit(int(1E6))

N, Q = map(int,input().split())

down = (2*N+20)*[-1] 
up = (2*N+20)*[-1]

for i in range(N,2*N):
    up[i] = i-N
    down[i-N] = i
    
while Q:
    c,p = map(int,input().split())    
    c -= 1
    p -= 1
    up[down[c]] = -1
    down[c] = p
    up[p] = c
    Q -= 1

def dfs(i):
    if i >= 2*N or up[i] == -1:
        return 0

    return 1+dfs(up[i])

for i in range(N):
    print(dfs(N+i),end=' ')