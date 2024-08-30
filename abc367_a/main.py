a, b, c = map(int, input().split())
if a<b:
    a+=24

if c<b:
    c+=24

if b<=a and a<=c:
    print('No')
else:
    print('Yes')
