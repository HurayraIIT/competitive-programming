n = int(input())
res = 0
for i in range(n):
    #a,b,c = list(map(int,input().split()))
    #if a+b+c>=2:
    #    res += 1

    a = str(input())
    if a.count("1") > 1:
        res += 1
    
print(res)