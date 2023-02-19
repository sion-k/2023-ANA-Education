n = int(input())
s = ' ' + input()

p = [[0] * 26 for i in range(n + 1)]

for i in range(1, n + 1):
    for j in range(26):
        p[i][j] = p[i - 1][j]

    p[i][ord(s[i]) - ord('a')] += 1


def diversity(p, l, r):
    ret = 0

    for j in range(26):
        if p[r][j] - p[l - 1][j] > 0:
            ret += 1

    return ret


ret = 0
for i in range(1, n):
    # left는 [1, i], right는 [i + 1, n]
    left, right = diversity(p, 1, i), diversity(p, i + 1, n)
    ret = max(ret, left + right)

print(ret)
