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

def SOD(n):
    if n==0:
        return 0
    return n%10 + SOD(n//10)
 
 
def main():
    n = ri()
    if math.gcd(n,SOD(n))>1 :
        wi(n)
    elif math.gcd(n+1,SOD(n+1))>1 :
        wi(n+1)
    else:
        wi(n+2)


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
