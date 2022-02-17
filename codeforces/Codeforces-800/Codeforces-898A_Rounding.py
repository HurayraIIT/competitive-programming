# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
from tkinter import N
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    n = ri()
    a = n 
    b = n 
    cntA = 0
    cntB = 0
    while a%10!=0:
        cntA += 1
        a += 1
    while b%10!=0:
        cntB += 1
        b -= 1
    
    if cntA < cntB:
        wi(a)
    else:
        wi(b)

 
 
if __name__ == '__main__':
    main()
