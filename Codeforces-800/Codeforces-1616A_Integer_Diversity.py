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
    a = ria()
    b = {}
    cnt = 0
    for i in a:
        p = b.get(i,-1)
        q = b.get(-i,-1)
        if p ==-1:
            cnt += 1
            b[i] = 1
        elif q ==-1:
            cnt += 1
            b[-i] = 1
    wi(cnt)

 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
