N, M = map(int,input().split())

R, C = [0]*M, [0]*M

for i in range(M):
    R[i],C[i] = map(int,input().split())

V_R, V_C = set(), set()

ans = 0
for i in range(M):
    x, y = R[~i], C[~i]
    if x not in V_R and y not in V_C:
        ans+=1
    V_R.add(x)
    V_C.add(y)

print(ans)