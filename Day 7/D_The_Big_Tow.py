N,M = [int(x) for x in input().split()]
A = list()
B = list()
for i in range(M):
    l = [int(x) for x in input().split()]
    A.append(l[0])
    B.append(l[1])

valid_pair = set()
def check_pairs(x):
    y = None
    for i in range(M):
        if A[i] != x and B[i] != x:
            if y is None:
                y = {A[i],B[i]}

            else:
                y = y.intersection({A[i],B[i]}) # y = y intersection {A[i], B[i]}
                
                if not y:
                    return
    
    if y is None:
        for e in range(1,N+1):
            if e != x:
                valid_pair.add((min(x,e),max(x,e)))
        return

    for e in y:
        valid_pair.add((min(x,e),max(x,e)))

check_pairs(A[0])
check_pairs(B[0])

print(len(valid_pair))
