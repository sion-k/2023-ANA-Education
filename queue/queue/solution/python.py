from collections import deque

queue = deque()

# push 42
queue.append(42)

# pop
queue.popleft()

# top
queue[0]

# isEmpty
if not queue:
    pass
