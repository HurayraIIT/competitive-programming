n , k = list(map(int,input().split()))
while k>0 :
    if n%10==0:
        n = n//10
    else:
        n = n - 1
    k -= 1
print(n) 
