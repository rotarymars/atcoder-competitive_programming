n = int(input())
a, b = map(int,input().split())
p = map(int, input().split())

one,two,three=(0,0,0)
for i in p:
    if i<=a:
        one+=1
    elif i>=a+1 and i<=b:
        two+=1
    else:
        three+=1

print(min(one, two, three))
