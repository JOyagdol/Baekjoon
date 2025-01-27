import sys

read = sys.stdin.readline

n = int(read())
size = list(map(int,read().split()))
t, p = map(int,read().split())

t_count = 0

for i in size:
    if i%t == 0:
        t_count = t_count + i//t
    else:
        t_count = t_count + i//t + 1

print(t_count)
print(n // p, n % p)