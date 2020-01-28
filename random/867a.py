n = int(input())
s = input()
a=0
b=0
for i in range(1,n):
    if s[i]=='F' and s[i-1]=='S':
        a += 1
    elif s[i]!=s[i-1]:
        b += 1
if a>b:
    print("YES")
else:
    print("NO")