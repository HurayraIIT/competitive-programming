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
    n, m, z = mp()
    sol = 0
    cnt = 0
    for i in range(1, z+1):
        if i%m==0 and i%n==0:
            cnt += 1
        
    wi(cnt)


 
 
if __name__ == '__main__':
    t = 1
    while t:
        t -= 1
        main()
