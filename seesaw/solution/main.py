n = int(input())
a = list(map(int, input().split()))

l, r = 0, sum(a)

index = -1

for i in range(n):
    r -= a[i]

    if l == r:
        index = i + 1

    l += a[i]

print(index)
