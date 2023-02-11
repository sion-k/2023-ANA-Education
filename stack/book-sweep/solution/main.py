s = input()
m = int(input())

left, right = [s[0]], [*s[-1:0:-1]]

for i in range(m):
    op, dir = input().split()

    if op == "move" and dir == "left" and len(left) > 1:
        right.append(left[-1])
        left.pop()
    elif op == "move" and dir == "right" and len(right) > 1:
        left.append(right[-1])
        right.pop()
    elif op == "tear" and dir == "left" and len(left) > 1:
        left.pop()
    elif op == "tear" and dir == "right" and len(right) > 1:
        right.pop()

print(left[-1], right[-1])
