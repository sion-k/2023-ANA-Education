n, m = map(int, input().split())

adj = [[0] * (n + 1) for i in range(n + 1)]

flag = True

for i in range(m):
    u, v = map(int, input().split())

    if u == v or adj[u][v]:
        flag = False

    adj[u][v] += 1
    adj[v][u] += 1

print("YES" if flag else "NO")
