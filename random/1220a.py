t = int(input())
s = input()
z = 0
n = 0
for i in s:
    if i=='z':
        z += 1
    elif i=='n':
        n += 1
for i in range(n):
    print("1",end=" ")
for i in range(z):
    print("0",end=" ")
print("\n")