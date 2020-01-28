q = int(input())

for i in range(q):
    n = int(input())
    if n<=4:
        print(4-n)
    elif n&1 :
        print(1)
    else:
        print(0)
        