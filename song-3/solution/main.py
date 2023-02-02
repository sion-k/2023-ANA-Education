n = int(input())
b = list(map(int, input().split()))

m = int(input())
q = list(map(int, input().split()))

for i in range(1, n):
    b[i] += b[i - 1]

MOD = 1000000007
ret = 0

for i in range(m):
    q[i] = (q[i] - 1) % b[-1] + 1
    lo, hi = -1, n - 1

    # b[lo] < q[i] and b[hi] >= q[i]
    while lo + 1 < hi:
        mid = (lo + hi) // 2
        if b[mid] >= q[i]:
            hi = mid
        else:
            lo = mid
    
    ret = (ret + hi + 1) % MOD

print(ret)
