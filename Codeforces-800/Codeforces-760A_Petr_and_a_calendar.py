# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
import math
def mp(): return map(int, sys.stdin.readline().split())
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    m, d = mp()
    if m in [1,3,5,7,8,10,12]:
        cnt = 0
        for i in range(1, 32):
            cnt += (1 if d==7 else 0)
            d = (1 if d==7 else d+1)
            # wi(d)
        if d!=1:
            cnt += 1
        wi(cnt)
    elif m==2:
        cnt = 0
        for i in range(1, 29):
            cnt += 1 if d==7 else 0
            d = 1 if d==7 else d+1
        if d!=1:
            cnt += 1
        wi(cnt)
    else:
        cnt = 0
        for i in range(1, 31):
            cnt += 1 if d==7 else 0
            d = 1 if d==7 else d+1
        if d!=1:
            cnt += 1
        wi(cnt)


 
 
if __name__ == '__main__':
    t = 1
    while t:
        t -= 1
        main()
