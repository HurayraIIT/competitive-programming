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
    a, b, c = map(int, input().split())
    
    if a+b==c or a+c==b or a==b+c:
        ws("YES")
    elif (a==b and c%2==0) or (a==c and b%2==0) or (c==b and a%2==0) :
        ws("YES")
    else:
        ws("NO")


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
