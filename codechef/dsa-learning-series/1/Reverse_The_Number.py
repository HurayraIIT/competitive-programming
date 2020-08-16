t = int(input())
for _ in range(t):
    n = [x for x in input()]
    print((''.join(n[::-1])).lstrip('0'))