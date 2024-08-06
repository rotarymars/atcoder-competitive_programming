n,m=map(int,input().split())
a=list(map(int,input().split()))
sum=0;
for i in a:
    sum+=i
limit=sum/4/m
ans=0
for i in a:
    if i>=limit:
        ans+=1
print("Yes" if ans>=m else "No")
