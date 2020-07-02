t = int(input())
for cs in range(t):
    a,b = input().split()
    a = int(a)
    b = int(b) 
    if a==1 or b==1:
        print("YES")
    elif a==2 and b==2:
        print("YES")
    else:
        print("NO")
