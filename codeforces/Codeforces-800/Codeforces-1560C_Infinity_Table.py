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
    x = ri()
    k = int(math.sqrt(x))
    
    if k*k == x:
        print(str(k) + " 1")
        return
    
    
    a = (k)*(k)
    b = (k+1)*(k+1) + 1
    r = b - x
    l = x - a
    if r<l:
        print(str(k+1) + " " + str(r))
    else:
        print(str(l) + " " + str(k+1))


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
