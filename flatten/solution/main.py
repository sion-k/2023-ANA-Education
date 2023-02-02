n = int(input())
a = list(map(int, input().split()))
b = min(a)

cost = 0
for x in a:
    cost += x - b

print(cost)
