n = int(input())
for i in range(1,n):
    if i&1:
        print("I hate that ",end="")
    else:
        print("I love that ",end="")
if n&1:
    print("I hate it")
else:
    print("I love it")