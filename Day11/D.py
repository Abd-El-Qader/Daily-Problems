from collections import namedtuple
from math import gcd 

Point2D = namedtuple('Point2D','x y')
line_equ = namedtuple('line_equ','a b c')

def solve():
    
    px,py,qx,qy,rx,ry,sx,sy = [int(x) for x in input().split()]
    p = Point2D(px,py)
    q = Point2D(qx,qy)
    r = Point2D(rx,ry)
    s = Point2D(sx,sy)

    def liner_equation(p1,p2):
        a = 2*(p2.x - p1.x)
        b = 2*(p2.y - p1.y)
        c = p1.x ** 2 + p1.y ** 2 - p2.x ** 2 - p2.y ** 2
        g = gcd(a,b,c) 
        a = int(a/g)
        b = int(b/g)
        c = int(c/g)
        if a < 0: # to check that the signal don't affect
            a *= -1
            b *= -1
            c *= -1
        if a == 0 and b < 0:
            b *= -1
            c *= -1

        return a,b,c

    l1 = line_equ(*liner_equation(p,q))
    l2 = line_equ(*liner_equation(r,s))

    if(l1 == l2):
        print("Yes")
        return
        
    if(l1.a * l2.b - l1.b * l2.a != 0):
        print("Yes")
        return
    

    print("No")

t = int(input())
while t:
    solve()
    t -= 1