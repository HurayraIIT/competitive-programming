from math import sqrt
n = int(input())

s = 0

for i in range(1,int(sqrt(n))+1):
    if n%i==0:
        s += 2
    if i == n/i:
        s -= 1
    if i==1:
        s-=1
print(s)