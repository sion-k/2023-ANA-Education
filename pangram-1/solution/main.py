s = input()
s = s.lower()

occured = [False] * 128
for x in s:
    occured[ord(x)] = True

isPangram = True
for x in range(ord('a'), ord('z') + 1):
    if not occured[x]:
        isPangram = False

print("YES" if isPangram else "NO")
