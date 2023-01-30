s = input()
s = s.lower()

occured = [False] * 128
for x in s:
    occured[ord(x)] = True

ret = []

for x in range(ord('a'), ord('z') + 1):
    if not occured[x]:
        ret.append(chr(x))

if ret:
    print("YES")
    print("".join(ret))
else:
    print("NO")
