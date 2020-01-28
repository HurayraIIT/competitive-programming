s = input()
a = 0
b = 0
for i in range(0,len(s)):
    if s[i]=='a':
        a += 1
    else:
        b += 1
while b!=0 and a<=(a+b)/2:
    b -= 1
print(a+b)