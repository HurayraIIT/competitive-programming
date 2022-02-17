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
    n = ri()
    b = ria()
    b.sort(reverse=True)
    sol = 0
    for j in range(n):  
        a = b.copy()
        for i in range(n):
            if i==j:
                continue
            while a[i]%2==0:
                a[i] //= 2
                a[j] *= 2
        
        sol = max(sol, sum(a))
    
    wi(sol)


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
