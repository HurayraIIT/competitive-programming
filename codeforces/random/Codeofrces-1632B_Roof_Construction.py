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
    k = 1
    while 2*k <= (n-1):
        k *= 2
    
    for i in range(k-1,-1,-1):
        print(i, end=' ')
    
    for i in range(k,n):
        print(i, end=' ')
    print()
    


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
