# 건물의 왼편에서 관측했을 때 보이는 건물의 개수
def count(a):
    cnt = 0 # 보이는 건물의 개수
    last_max = 0
    
    for x in a:
        if last_max < x:
            last_max = x
            cnt += 1

    return cnt

n = int(input())
a = list(map(int, input().split()))
ra = reversed(a)

print(count(a), count(ra))
