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
    hc, dc = map(int, input().split())
    hm, dm = map(int, input().split())
    k, w, a = map(int, input().split())
    
    if (hm+dc-1)//dc <= (hc+dm-1)//dm:
        ws("YES")
        return
    
    for i in range(k+1):
        p = dc + i*w
        q = hc + (k-i)*a
        if (hm+p-1)//p <= (q+dm-1)//dm:
            ws("YES")
            return
    
    ws("NO")
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
