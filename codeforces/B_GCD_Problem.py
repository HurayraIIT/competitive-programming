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
    
    if n%2==0:
        print(str(n//2) + " " + str((n//2)-1) + " 1")
    elif (n//2)%2==0:
        p = (n+1)//2
        print(str(p) + " " + str(p-2) + " 1")
    else:
        p = (n)//2
        print(str(p+2) + " " + str(p-2) + " 1")


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
