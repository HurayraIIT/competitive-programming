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
    p, a, b, c = map(int, input().split())
    t1 = 1e18
    t2 = 1e18
    t3 = 1e18
    if p%a==0:
        t1 = 0
    else:
        t1 = a * ((p//a)+1) - p
    
    if p%b==0:
        t2 = 0
    else:
        t2 = b * ((p//b)+1) - p
        
    if p%c==0:
        t3 = 0
    else:
        t3 = c * ((p//c)+1) - p
    
    wi(min(t1, min(t2,t3)))
        


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
