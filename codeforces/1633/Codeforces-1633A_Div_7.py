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


def findDiff(i, n):
    si = str(i)
    sn = str(n)
    leni = len(si)
    lenn = len(sn)
    if leni!=lenn:
        return 999
    cnt = 0
    for j in range(leni):
        if si[j] != sn[j]:
            cnt += 1
    return cnt
 
 
def main():
    n = ri()
    a = []
    for i in range(200):
        if i and 7*i<=999:
            a.append(7*i)
        
    changes = 999
    p = 0
    for i in a:
        if findDiff(i,n) < changes:
            p = i
            changes = findDiff(i,n)
    
    wi(p)
    
    


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
