n, m = map(int, input().split())

adj = [[] for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u].append(v)
    adj[v].append(u)

visit = [False] * (n + 1)


def dfs(here):
    visit[here] = True

    for there in adj[here]:
        if not visit[there]:
            dfs(there)


cnt = 0

for here in range(1, n + 1):
    if not visit[here]:
        dfs(here)
        cnt += 1

print(cnt)
