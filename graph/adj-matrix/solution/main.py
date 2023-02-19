n, m = map(int, input().split())

adj = [[0] * (n + 1) for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u][v] = 1
    adj[v][u] = 1

for i in range(1, n + 1):
    print(*adj[i][1:])
