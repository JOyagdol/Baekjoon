num = int(input())

def fac(n):
    if n==0:
        return 1
    return n*fac(n-1)

cnt = 0
sum = fac(num)
i = 10
while(sum%i == 0):
    cnt+=1
    i*=10
print(cnt)
    