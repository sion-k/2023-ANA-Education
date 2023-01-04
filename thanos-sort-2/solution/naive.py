tc = int(input())

for __tc in range(tc):
    n = int(input())
    a = list(map(int, input().split()))

    while True:
        j = -1

        for i in range(n - 1):
            if a[i] > a[i + 1]:
                j = i
                break

        if j != -1:
            a[j] = a[j] / 2
        else:
            break
        
    print(*a)
    