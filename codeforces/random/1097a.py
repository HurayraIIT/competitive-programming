s = input()
a = list(input().split())
f = int(0)
for i in a:
    if s[0]==i[0] or s[1]==i[1]:
        f=1
if f:
    print("YES")
else:
    print("NO")