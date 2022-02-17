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
 
 
 
def main():
    n, x = mp()
    a = ria()
    sol = x
    for i in a:
        if i>0:
            x += i
            sol = max(sol, x)
        elif i<0:
            x += i
    
    wi(sol)


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
