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
    n, m, k = map(int, input().split())
    npos = 0
    mpos = 0
    side = 'L'
    
    if k%2==0:
        side = 'R'
        
    p = (k-1)//2
    npos = (p//m)+1
    mpos = (p%m) + 1 
    
    print(str(npos) + " " + str(mpos) + " " + side)


 
 
if __name__ == '__main__':
    t =   1
    while t:
        t -= 1
        main()
