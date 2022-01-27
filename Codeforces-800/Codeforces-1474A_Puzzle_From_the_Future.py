# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
from readline import append_history_file
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
    s = input()
    b = []
    for _ in s:
        b.append(int(_))
    a = [0] * n
    a[0] = 1
    for i in range(1,n):
        if a[i-1]+b[i-1] != b[i]+1:
            a[i] = 1
        else:
            a[i] = 0
    sys.stdout.write(''.join([str(x) for x in a]) + '\n')


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
