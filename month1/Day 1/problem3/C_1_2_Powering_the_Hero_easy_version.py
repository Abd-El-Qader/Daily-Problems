from queue import PriorityQueue
def solve():
    n = int(input())
    arr = [int(x) for x in input().split(' ')]
    ans = int()

    st = PriorityQueue()
    for i in arr:
        if i:
            st.put(-i)
            continue

        if st.empty() == False:
            ans -= st.get()

    print(ans)

t = int(input())
while t:
    solve()
    t -= 1
