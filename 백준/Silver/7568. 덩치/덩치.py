dungchi = list()
tc = int(input())
for i in range(tc):
    x,y = map(int,input().split())
    dungchi.append([x,y])



for i in dungchi:
    rank = 1
    for j in dungchi:
        if i[0] < j[0] and i[1] < j[1]:
                rank += 1
    print(rank,end=" ")