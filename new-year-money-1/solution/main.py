n = int(input())
a = list(map(int, input().split()))

for i in range(n):
    less, large = 0, 0
    
    for j in range(n):
        if a[j] < a[i]:
            less += 1
        elif a[j] > a[i]:
            large += 1
    
    print(less, large)
