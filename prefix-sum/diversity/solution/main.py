n = int(input())
s = input()

l, r = [0] * 26, [0] * 26
for x in s:
    r[ord(x) - ord('a')] += 1

ret = 0
for x in s:
    l[ord(x) - ord('a')] += 1
    r[ord(x) - ord('a')] -= 1

    cand = 0
    for i in range(26):
        if l[i]:
            cand += 1
        if r[i]:
            cand += 1
    
    ret = max(ret, cand)

print(ret)
