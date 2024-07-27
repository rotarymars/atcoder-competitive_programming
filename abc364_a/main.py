n=int(input())
before=""
for i in range(n):
    tmp=input()
    if tmp=="sweet" and before=="sweet":
        print("No")
        exit()
    before=tmp
    print(tmp,before)
print("Yes")
