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
    s = rs()
    ans = ""
    for i in reversed(s):
        if i=='6':
            ans += '9'
        elif i=='9':
            ans += '6'
        else:
            ans += i
    
    ws(ans)


 
 
if __name__ == '__main__':
    t = 1
    for tc in range(1,t+1):
        main(tc)
