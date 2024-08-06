def rud(a,b):
    return (a+b-1)//b
n=int(input())
d,x=map(int,input().split())
for i in range(n):
    x+=rud(d,int(input()))
print(x)
