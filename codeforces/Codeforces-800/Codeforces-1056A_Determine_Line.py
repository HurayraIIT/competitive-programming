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
    m = [0 for i in range(101)]
    for _ in range(n):
        if _ == 0:
            a = ria()
            for i in range(1,a[0]+1):
                m[a[i]] = 1
        else:
            a = ria()
            for i in range(1,a[0]+1):
                m[a[i]] += 1
    
    cnt = 0
    for i in range(1,101):
        if m[i]==n:
            print(i, end=" ")
    
    print()
        
        


 
 
if __name__ == '__main__':
    t =  1
    while t:
        t -= 1
        main()
