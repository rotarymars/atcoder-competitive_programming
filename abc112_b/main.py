n,t=map(int,input().split())
ans=10**10
for i in range(n):
    c,tt=map(int,input().split())
    if tt<=t:
        ans=min(ans,c)
print("TLE" if ans==10**10 else ans)
