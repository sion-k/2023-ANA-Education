n, m = map(int, input().split())
s = input()

f = [(1 if s[i] == 'e' else 0) for i in range(n)]

p = [0] * n
p[0] = f[0]

for i in range(1, n):
    p[i] = p[i - 1] + f[i]

ret = []

for i in range(m):
    l, r = map(int, input().split())
    l -= 1; r -= 1
    
    sum = p[r]
    if l - 1 >= 0:
        sum -= p[l - 1]

    ret.append(sum)

print(*ret, sep="\n")
