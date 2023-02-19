n = int(input())
a = list(map(int, input().split()))

# 배열을 1부터 시작하게 변경
a = [0] + a
p = [0] * (n + 1)

for i in range(1, n + 1):
    p[i] = p[i - 1] + a[i]

print(*p[1:])
