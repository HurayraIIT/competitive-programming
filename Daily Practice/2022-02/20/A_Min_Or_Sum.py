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
 
 
 
def main(tc:int):
    n = ri()
    a = ria()
    s = 0
    for i in a:
        s |= i
    
    
    ans = 0
    cnt = 0
    while(s):
        if s&1:
            ans += 2**cnt
            cnt += 1
        else:
            cnt += 1
        s >>= 1
    
    wi(ans)


 
 
if __name__ == '__main__':
    t = ri() #    1
    for tc in range(1,t+1):
        main(tc)
