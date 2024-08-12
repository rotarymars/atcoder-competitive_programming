import random
n=random.randint(0,1000)
print(n)
for _ in range(n**2):
    tmplist=[]
    for _a in range(n):
        tmplist.append(random.randint(1,999))
    print(*tmplist)
q=random.randint(100,10000)
print(q)
for _ in range(q):
    a=1
    b=0
    c=1
    d=0
    e=1
    f=0
    while a>b:
        a=random.randint(1,n)
        b=random.randint(1,n)
    while c>d:
        c=random.randint(1,n)
        d=random.randint(1,n)
    while e>f:
        e=random.randint(1,n)
        f=random.randint(1,n)
    print(a,b,c,d,e,f)

