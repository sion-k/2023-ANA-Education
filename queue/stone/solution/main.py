from collections import deque

n, m = map(int, input().split())
queue = deque([i for i in range(1, n + 1)])

for i in range(m):
    op = input()

    if op == "raise":
        queue.append(queue[0])
        queue.popleft()
    elif op == "discard" and len(queue) > 1:
        queue.popleft()

print(queue[0])
