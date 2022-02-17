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
    b = set()
    cnt = 0
    sol = 0
    for i in a:
        if i not in b:
            b.add(i)
            cnt += 1
            sol = max(sol, cnt)
        else:
            cnt -= 1
            
    wi(sol)    
        


 
 
if __name__ == '__main__':
    t = 1
    while t:
        t -= 1
        main()
