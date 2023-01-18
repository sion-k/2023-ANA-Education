tc = int(input())

for _ in range(tc):
    n = int(input())
    a = list(map(int, input().split()))

    k = 1
    for i in range(n):
        cnt = 0
        
        for j in range(n):
            if i != j and a[i] == a[j]:
                cnt += 1
            
        if cnt == 0:
            k = i + 1
            
    print(k)
