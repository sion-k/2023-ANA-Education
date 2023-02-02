s = input()
s = s.lower()

frequency = [[0] * 26 for i in range(len(s))]

for i in range(len(s)):
    if i - 1 >= 0:
        for j in range(26):
            frequency[i][j] = frequency[i - 1][j]
    
    frequency[i][ord(s[i]) - ord('a')] += 1

ret = []

q = int(input())
for i in range(q):
    a, b = map(int, input().split())
    a -= 1; b -= 1

    t = [frequency[b][j] for j in range(26)]

    if a - 1 >= 0:
        for j in range(26):
            t[j] -= frequency[a - 1][j]

    ret.append("1" if all(t) else "0")

print("".join(ret))
