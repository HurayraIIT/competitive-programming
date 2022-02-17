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
    b = [0] * (n+1)
    
    cnt = 0
    s = set()
    
    for i in range(n):
        if a[i] > i+1:
            k = a[i]
            if b[i+1]!=0:
                k = b[i+1]
            for j in range(i+1, a[i]+1):
                b[j] = k
    for i in range(1,n+1):
        if b[i]!=0:
            s.add(b[i])
        else:
            cnt += 1
    print(len(s)+cnt)
    # print(b)
    # ws("----")

 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
