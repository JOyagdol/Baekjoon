'''
5
5 1 1 2 1

4
'''

import sys

read = sys.stdin.readline
n = int(read())
s = list(map(int, read().split()))

max_count = 0
left = 0
count = {}
d_count = 0

for right in range(n):
    if s[right] in count:
        count[s[right]] += 1
    else:
        count[s[right]] = 1
        d_count += 1

    while d_count > 2:
        count[s[left]] -= 1
        if count[s[left]] == 0:
            del count[s[left]]
            d_count -= 1
        left += 1
    
    max_count = max(max_count, right - left + 1)

print(max_count)