def solve():
    n = int(input())
    s = input()
    mp = {}
    i = 0
    tt = ""

    while i+1 < n:
        t = s[i:i+2] 
        if(t == tt):
            i+=1
            tt = ''
            continue
        
        if mp.get(t):
            print("YES")
            return
        else:
            mp.update({t:1})
        tt = t
        i+=1

    print("NO")

def solve2():
    n, s = int(input()), input()
    print('YES' if any(s[i:i+2] in s[:i] for i in range(2,n-1)) else 'NO')

t = int(input())
while t:
    solve2()
    t -= 1
