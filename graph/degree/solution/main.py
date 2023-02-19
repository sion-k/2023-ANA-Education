n, m = map(int, input().split())

adj = [[] for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u].append(v)
    adj[v].append(u)

ret = 0
for i in range(1, n + 1):
    ret += len(adj[i])

print(ret)
