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
    p = int(math.sqrt(n))
    if p*p != n:
        p += 1
    sol = 1
    for i in range(p,0,-1):
        if n%i==0:
            sol = i
            break
    
    if sol > (n//sol):
        sol = (n//sol)
    
    print(str(sol) + " " + str(n//sol))


 
 
if __name__ == '__main__':
    t =   1
    while t:
        t -= 1
        main()
