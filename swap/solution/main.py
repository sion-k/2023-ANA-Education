N, M = map(int, input().split())
A = [i for i in range(1, N + 1)]

for i in range(M):
    U, V = map(int, input().split())
    U -= 1; V -= 1

    A[U], A[V] = A[V], A[U]

print(*A)
