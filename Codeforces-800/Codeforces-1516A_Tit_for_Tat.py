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
    n, k = map(int,input().split())
    a = ria()
    
    for i in range(0,n-1):
        while k>0 and a[i]>0:
            k -= 1
            a[i] -= 1
            a[n-1] += 1
    
    wia(a)


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
