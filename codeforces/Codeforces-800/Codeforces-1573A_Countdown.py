# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
import math
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    n = ri()
    a = rs()
    cnt = 0
    for i in range(n):
        if i != n-1:
            cnt += ord(a[i])-ord('0')
            if ord(a[i])-ord('0') != 0:
                cnt += 1
        else:
            cnt += ord(a[i])-ord('0')
    wi(cnt)


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
