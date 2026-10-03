import math
def solve():
    n = int(input())
    def is_pf_sqr(n):
        t = int(n*(n+1)/2);  
        t2 = int(math.sqrt(t))
        t2 *= t2
        if t2 == t:
            return True

        return False

    if(is_pf_sqr(n)):
        print(-1)
        return
    
    ans = [*range(0,n+1)] 
    i = 1
    while i <= n:
        if is_pf_sqr(i):
            ans[i],ans[i+1] = ans[i+1],ans[i]
        print(f"{ans[i]} ",end='')
        i += 1
    print()

    
t = int(input())
while t:
    solve()
    t -= 1
