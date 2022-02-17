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
    n = ri()
    s = rs()
    cnt = 0
    for i in range(1,n):
        cnt += (1 if s[i]=='0' else 0)
    
    ws(s[0]+('0'*cnt))

 
 
if __name__ == '__main__':
    t =  1
    while t:
        t -= 1
        main()
