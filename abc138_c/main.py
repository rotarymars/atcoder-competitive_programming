n = int(input())
v = list(map(int, input().split()))
v.sort()
ans = v[0]
for i in range(1, len(v)):
    ans = (ans + v[i])/2
print(ans)
