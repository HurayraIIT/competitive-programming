m , n = list(map(int,input().split()))

s = (m//2)*n
if m&1:
    s += n//2
print(s)