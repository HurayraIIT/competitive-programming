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
    a = ria()
    b = []
    for i in a:
        b.append(i)
    a.sort()
    l = 0
    r = 0
    # print(a,b)
    for i in range(n):
        if a[i]!=b[i]:
            l = i
            r = b.index(a[i])
            break
    
    for i in range(l):
        print(b[i], end=" ")
    
    for i in range(r,l-1,-1):
        print(b[i], end=" ")
    
    for i in range(r+1,n):
        print(b[i], end=" ")
    
    print()


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
