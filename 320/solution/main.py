n = int(input())
a = list(map(int, input().split()))

minDiff, minIndex = 1000, 0

for i in range(len(a)):
    diff = abs(a[i] - 320)

    if minDiff > diff:
        minDiff = diff
        minIndex = i

print(minIndex + 1)
