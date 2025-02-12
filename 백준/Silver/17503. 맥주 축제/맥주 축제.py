import sys
import heapq
read = sys.stdin.readline

n, m, k = map(int,read().split())
l = []
pq = []
heapq.heapify(pq)
for _ in range(k):
    v, c = map(int,read().split())
    l.append((v,c))
l.sort(key=lambda x: (x[1],x[0]))
find = False
level = 0
s = 0
for i in range(k):
    heapq.heappush(pq,l[i][0])
    s += l[i][0]
    level = l[i][1]
    if len(pq) == n:
        if s >= m:
            find = True
            print(level)
            break
        else:
            s -= heapq.heappop(pq)
if not find:
    print(-1)