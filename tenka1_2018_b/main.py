a,b,k=map(int,input().split())
mode=1
for i in range(k):
    if mode==1:
        b+=a//2
        a//=2
    else:
        a+=b//2
        b//=2
    mode*=-1
print(a,b)
