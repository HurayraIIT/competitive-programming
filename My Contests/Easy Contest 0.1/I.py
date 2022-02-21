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
 
 
 
def main(tc:int):
    n = ri()
    d = dict()
    
    for _ in range(n):
        s, t = input().split()
        t = int(t)
        d[s] = t
        
    d2 = sorted(d.items(), key=lambda x: x[1], reverse=True)
    
    print(d2[1][0])

 
 
if __name__ == '__main__':
    t = 1
    for tc in range(1,t+1):
        main(tc)
