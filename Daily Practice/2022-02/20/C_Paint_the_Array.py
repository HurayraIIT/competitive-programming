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
 
def findGCD(a):
    l = len(a)
    
    gcd = a[0]
    for i in range(1,l):
        gcd = math.gcd(gcd, a[i])
    return gcd

def isNotDiv(a, x):
    for i in a:
        if i%x==0:
            return False
    return True
 
def main(tc:int):
    n = ri()
    a = ria()
    if n==1:
        wi(1)
        return
    p = []
    q = []
    for i in range(n):
        if i&1:
            p.append(a[i])
        else:
            q.append(a[i])
    
    x = findGCD(p)
    y = findGCD(q)
    
    if isNotDiv(q, x):
        wi(x)
    elif isNotDiv(p, y):
        wi(y)
    else:
        wi(0)
 
 
if __name__ == '__main__':
    t = ri() #    1
    for tc in range(1,t+1):
        main(tc)
