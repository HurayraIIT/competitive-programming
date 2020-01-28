n = int(input())
for i in range(n):
    s = input()
    l = len(s)
    if l <= 10:
        print(s)
    else:
        print(s[0]+str(l-2)+s[-1])