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
    c = [0] * 200
    for i in a:
        c[i%200] += 1
    
    ans = 0
    for i in range(200):
        if c[i]>1:
            ans += c[i]*(c[i]-1)//2
        
    wi(ans)


 
 
if __name__ == '__main__':
    t = 1
    for tc in range(1,t+1):
        main(tc)
