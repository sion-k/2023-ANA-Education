stack = []
ret = []

n = int(input())
for i in range(n):
    op_opr = input().split()

    if op_opr[0] == "push":
        x = int(op_opr[1])
        stack.append(x)
    elif stack:
        ret.append(stack[-1])
        stack.pop()
    else:
        ret.append(-1)

print(*ret, sep="\n")
