n = int(input())
r1, c1, r2, c2 = map(int, input().split())

a = [["*"] * n for r in range(n)]

for r in range(min(r1, r2) - 1, max(r1, r2)):
    for c in range(min(c1, c2) - 1, max(c1, c2)):
        a[r][c] = '.'

for r in range(n):
    for c in range(n):
        print(a[r][c], end='')
    print()
