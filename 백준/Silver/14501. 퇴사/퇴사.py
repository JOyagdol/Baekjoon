import sys
read = sys.stdin.readline

n = int(read())

schedule = [list(map(int,read().split())) for i in range(n)]

dp = [0 for _ in range(n+1)]

for i in range(n):
    for j in range(i+schedule[i][0],n+1):
        if dp[j] < dp[i] + schedule[i][1]:
            dp[j] = dp[i] + schedule[i][1]

print(dp[-1])