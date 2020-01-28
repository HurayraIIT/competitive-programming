n = int(input())
ans = 0
while n>0:
    n -= 1
    s = input()
    if s[0]=='T':
        ans += 4
    elif s[0]=='C':
        ans += 6
    elif s[0]=='O':
        ans += 8
    elif s[0]=='D':
        ans += 12
    elif s[0]=='I':
        ans += 20
print(ans)
