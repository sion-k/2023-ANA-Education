tc = int(input())

for _ in range(tc):
    n, m = map(int, input().split())
    s = input()

    p = [0] * n
    for i in range(n):
        p[i] = 1 if s[i] == 'm' else 0

        if i - 1 >= 0:
            p[i] += p[i - 1]
    
    ret = []

    for i in range(m):
        a, b = map(int, input().split())
        a -= 1; b -= 1

        sum = p[b]

        if a - 1 >= 0:
            sum -= p[a - 1]

        flag = b - a + 1 >= 3 and s[a] == 'U' and sum == b - a

        ret.append("1" if flag else "0")

    print("".join(ret))