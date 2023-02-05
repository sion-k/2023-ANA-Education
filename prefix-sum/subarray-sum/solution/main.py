n, m = map(int, input().split())
a = list(map(int, input().split()))

ret = []

for i in range(m):
    l, r = map(int, input().split())
    l -= 1; r -= 1

    ret.append(sum(a[l:r + 1]))

print(*ret, sep="\n")
