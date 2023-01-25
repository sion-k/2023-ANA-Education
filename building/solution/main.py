# 건물의 왼편에서 관측했을 때 보이는 건물의 개수
def count(a):
    ret = 0 # 보이는 건물의 개수
    last_max = 0
    
    for x in a:
        if last_max < x:
            last_max = x
            ret += 1

    return ret

n = int(input())
a = list(map(int, input().split()))
ra = reversed(a)

print(count(a), count(ra))
