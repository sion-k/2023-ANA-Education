n, m = map(int, input().split())
s = [input() for i in range(n)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]


def inRange(x, y):
    return 0 <= x < n and 0 <= y < m


cnt = 0

for x in range(n):
    for y in range(m):
        for d in range(4):
            nx, ny = x + dx[d], y + dy[d]

            if s[x][y] == '.' and inRange(nx, ny) and s[nx][ny] == '.':
                cnt += 1

print(n * m, cnt // 2)
