from collections import defaultdict
from sys import setrecursionlimit
setrecursionlimit(int(1E6))

S = input()
d = defaultdict(int)
Mod = 998244353
for i in range(len(S)):
    c = S[i]
    d[c] = (d['a'] + d['b'] + d['c'] + 1) % Mod

print(sum(d.values())%Mod)
