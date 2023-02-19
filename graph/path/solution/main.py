n, m = map(int, input().split())

adj = [[0] * (n + 1) for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u][v] = 1
    adj[v][u] = 1

k = int(input())
a = list(map(int, input().split()))

flag = True
for i in range(k - 1):
    u, v = a[i], a[i + 1]

    if not adj[u][v]:
        flag = False

print("YES" if flag else "NO")
