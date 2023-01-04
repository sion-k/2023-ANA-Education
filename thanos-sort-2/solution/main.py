tc = int(input())

for __tc in range(tc):
    n = int(input())
    a = list(map(int, input().split()))

    for i in range(n - 2, -1, -1):
        while a[i] > a[i + 1]:
            a[i] = a[i] // 2

    print(*a)
    