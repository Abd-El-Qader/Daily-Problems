from collections import deque
from sys import stderr

H, W, K = (int(x) for x in input().split())
grid = [input() for _ in range(H)]

r = [0]*H
c = [0]*W

for i in range(H):
    for j in range(W):
        if grid[i][j] == '#':
            r[i] = 1
            c[j] = 1

d = deque()
cnt = [[-1]*W for _ in range(H)]

for i in range(H):
    for j in range(W):
        if r[i] == c[j] == 0:
            d.append((i,j))
            cnt[i][j] = 0

ans = int()
while d:
    i, j = d.popleft()

    if cnt[i][j] <= K:
        ans +=1 

    for xi,xj in ((i+1,j),(i,j+1),(i-1,j),(i,j-1)):
        if 0 <= xi < H and 0 <= xj < W:
            if grid[xi][xj] == '.' and cnt[xi][xj] == -1:
                cnt[xi][xj] = cnt[i][j]+1
                d.append((xi,xj))
    
print(ans)