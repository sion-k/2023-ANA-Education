n, m = map(int, input().split())
s = [input() for i in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def inRange(x, y):
    return 0 <= x < n and 0 <= y < m


visit = [[False] * m for i in range(n)]


def dfs(x, y):
    visit[x][y] = True

    for d in range(4):
        nx, ny = x + dx[d], y + dy[d]

        if inRange(nx, ny) and s[nx][ny] == '#' and not visit[nx][ny]:
            dfs(nx, ny)


cnt = 0
for x in range(n):
    for y in range(m):
        if s[x][y] == '#' and not visit[x][y]:
            dfs(x, y)
            cnt += 1

print(cnt)
