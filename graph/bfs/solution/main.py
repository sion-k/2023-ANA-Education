from collections import deque
n, m = map(int, input().split())

adj = [[] for i in range(n + 1)]

for i in range(m):
    u, v = map(int, input().split())

    adj[u].append(v)
    adj[v].append(u)

for i in range(1, n + 1):
    adj[i].sort()

queue = deque()
visit = [False] * (n + 1)

queue.append(1)
visit[1] = True
traversal = []


while queue:
    here = queue.popleft()
    traversal.append(here)

    for there in adj[here]:
        if not visit[there]:
            queue.append(there)
            visit[there] = True

print(*traversal)
