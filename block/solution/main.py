A, B = map(int, input().split())

cnt = 0
while abs(A - B) >= 2:
    if A < B:
        A, B = B, A
    
    A -= 1; B += 1
    cnt += 1

print(abs(A - B), cnt)
