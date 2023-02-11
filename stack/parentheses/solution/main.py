s = input()

stack = []
flag = True

for x in s:
    if x == '(':
        stack.append(x)
    elif stack:
        stack.pop()
    else:
        flag = False

if stack:
    flag = False

print("YES" if flag else "NO")
