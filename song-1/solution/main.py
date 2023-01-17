def solve():
    n = int(input())
    a = [input() for i in range(n)]
    b = [int(input()) for i in range(n)]

    m = int(input())
    q = [int(input()) for i in range(m)]

    # t[i] = i초에 듣고 있는 노래 번호
    t = [0] * 3001
    p = 1
    
    for i in range(n):
        for j in range(b[i]):
            t[p] = i
            p += 1
    
    for i in range(m):
        x = t[q[i]]
        print(a[x])

solve()
