n, m = map(int, input().split())

adj = [[] for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u].append(v)
    adj[v].append(u)

for i in range(1, n + 1):
    adj[i].sort()

visit = [False] * (n + 1)
traversal = []


def dfs(here):
    visit[here] = True
    traversal.append(here)

    for there in adj[here]:
        if not visit[there]:
            dfs(there)


dfs(1)

print(*traversal)
