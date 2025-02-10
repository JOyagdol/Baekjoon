import sys
read = sys.stdin.readline

n = int(read())
cnt = 0
cat = 1

if n == 0:
    print(0)
elif n == 1:
    print(1)
else:
    while n != cat:
        if cat >= n - cat:
            cat += n - cat
            cnt += 1
        else:
            cat = cat + cat
            cnt += 1
    print(cnt + 1)