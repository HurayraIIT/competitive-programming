# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
import math
from xmlrpc.client import gzip_decode
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    n, k = map(int, input().split())
    s = rs()
    tpos = 0
    gpos = 0
    for i in range(n):
        if s[i]=='T':
            tpos = i
        if s[i]=='G':
            gpos = i
    flag = 1
    if gpos < tpos:
        for i in range(gpos, tpos+1, k):
            if i==gpos:
                continue
            if s[i] == '#':
                flag = 0
                break
            if i==tpos:
                flag += 1
    else:
        for i in range(tpos, gpos+1, k):
            if i==tpos:
                continue
            if s[i] == '#':
                flag = 0
                break
            if i==gpos:
                flag += 1
        
    if flag < 2:
        ws("NO")
    else:
        ws("YES")
    


 
 
if __name__ == '__main__':
    t =   1
    while t:
        t -= 1
        main()
