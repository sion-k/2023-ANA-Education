# (n, m) 크기의 2차원 배열 s에서 문자 x의 위치
# 여러 개 있다면 가장 위, 가장 왼쪽 반환
def index(n, m, s, x):
    for r in range(n):
        for c in range(m):
            if s[r][c] == x:
                return r, c
    return 0, 0

# LRUD를 0123으로 변환
def dir(x):
    return "LRUD".index(x)

dr = [0, 0, -1, 1]
dc = [-1, 1, 0, 0]

# (r, c)에서 입력 x를 처리하면 이동하는 방향 반환
def move(r, c, x):
    d = dir(x)
    nr, nc = r + dr[d], c + dc[d]
    
    return nr, nc

def inRange(r, c, n, m):
    return 0 <= r < n and 0 <= c < m

def solve(n, m, s, k, t):
    r, c = index(n, m, s, '@')

    for i in range(k):
        nr, nc = move(r, c, t[i])

        if inRange(nr, nc, n, m) and s[nr][nc] != '#':
            r, c = nr, nc

    return r , c

tc = int(input())

ret = []
for _ in range(tc):
    n, m = map(int, input().split())
    s = [input() for i in range(n)]

    k = int(input())
    t = input()

    ret.append(solve(n, m, s, k, t))

for r, c in ret:
    print(r + 1, c + 1)
