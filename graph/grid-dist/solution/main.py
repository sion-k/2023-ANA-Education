from collections import deque

n, m = map(int, input().split())
s = [input() for i in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def inRange(x, y):
    return 0 <= x < n and 0 <= y < m


visit = [[False] * m for i in range(n)]
dist = [[-1] * m for i in range(n)]


def bfs(sx, sy):
    queue = deque()
    queue.append((sx, sy))

    visit[sx][sy] = True
    dist[sx][sy] = 0

    while queue:
        x, y = queue.popleft()

        for d in range(4):
            nx, ny = x + dx[d], y + dy[d]

            if inRange(nx, ny) and s[nx][ny] == '.' and not visit[nx][ny]:
                queue.append((nx, ny))
                visit[nx][ny] = True
                dist[nx][ny] = dist[x][y] + 1


bfs(0, 0)

for x in range(n):
    print(*dist[x])
