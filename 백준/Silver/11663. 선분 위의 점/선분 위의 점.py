import sys

read = sys.stdin.readline
n, m = map(int,read().split())
p = list(map(int, read().split()))
p.sort()
data = [list(map(int, read().split())) for _ in range(m)]

def b_search(target, dir):
    start = 0
    end = n - 1
    
    while start <= end:
        mid = (start + end) // 2
        
        if p[mid] > target:
            end = mid - 1
        elif p[mid] < target:
            start = mid + 1
        else:
            return mid
    
    if dir == 0:
        return start
    else:
        return end


if __name__ == "__main__":
    for s, e in data:
        s_i = b_search(s,0)
        e_i = b_search(e,1)
         
        print(e_i - s_i + 1)