import cmath
import math
def solve():
    ch = [int(x) for x in input().split()]
    mo = [int(x) for x in input().split()]
    k,*up = (int(x) for x in input().split())
    up[0],up[1] = up[1],up[0]
    i = 0
    while i <= k:
        ch[0] += up[0]*i
        ch[1] += up[1]*(k-i)
        pow_c = math.ceil(ch[0]/mo[1])
        pow_m = math.ceil(mo[0]/ch[1])
        ch[0] -= up[0]*i
        ch[1] -= up[1]*(k-i)
        if(pow_c >= pow_m):
            print("YES")
            return
        i += 1
    print("NO")
    
t = int(input())
while t:
    solve()
    t -= 1


