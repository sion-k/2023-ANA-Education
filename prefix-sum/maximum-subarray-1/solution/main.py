n = int(input())
a = list(map(int, input().split()))

p = [0] * n
p[0] = a[0]

for i in range(1, n):
    p[i] = p[i - 1] + a[i]

ret = -100
for i in range(n):
    for j in range(i, n):
        sum = p[j]
        if i - 1 >= 0:
            sum -= p[i - 1]

        ret = max(ret, sum)

print(ret)
