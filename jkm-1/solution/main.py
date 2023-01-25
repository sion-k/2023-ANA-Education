def solve():
    n, m, k = map(int, input().split())
    a = list(map(int, input().split()))
    k -= 1

    for i in range(k, n):
        if a[i] >= a[k] + m:
            print(i + 1)
            return
    
    print("JB")

tc = int(input())
for i in range(tc):
    solve()

