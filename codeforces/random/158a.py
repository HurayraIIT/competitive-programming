n , k = list(map(int,input().split()))
a = list(map(int,input().split()))

res = 0
for i in a:
    if i >= a[k-1] and i>0 :
        res += 1
        
print(res)