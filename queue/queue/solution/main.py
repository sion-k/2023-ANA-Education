from collections import deque

queue = deque()
ret = []

n = int(input())
for i in range(n):
    op_opr = input().split()

    if op_opr[0] == "push":
        x = int(op_opr[1])
        queue.append(x)
    elif queue:
        ret.append(queue[0])
        queue.popleft()
    else:
        ret.append(-1)

print(*ret, sep="\n")
