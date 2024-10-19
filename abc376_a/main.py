n,c=map(int,input().split())
t=map(int,input().split())

cnt=0
bef=-1
for i in t:
    if bef==-1:
        cnt+=1
        bef=i
    else:
        if i-bef>=c:
            cnt += 1
            bef=i

print(cnt)
