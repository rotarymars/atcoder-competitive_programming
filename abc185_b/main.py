n,m,t=map(int,input().split())
lasttime=0
cur=n
ok=True
for i in range(0,m+1):
    if i<m:
        a,b=map(int,input().split())
    else:
        a=b=t
    cur-=a-lasttime
    if cur<=0:
        ok=False
    cur=min(n,cur+b-a)
    lasttime=b
if ok:
    print("Yes")
else:
    print("No")
