from math import gcd

def solve():
    n = int(input())

    for i in range(n):
        a, b = map(int, input().split())
        
        print("Perfect" if gcd(a, b) == 1 else "Not even close")

solve()