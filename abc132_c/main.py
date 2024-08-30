n = int(input())
d = list(map(int, input().split()))
d.sort()
print(d[len(d)//2] - d[len(d)//2-1])
