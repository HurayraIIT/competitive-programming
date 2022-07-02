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

def isSorted(a) -> bool:
    for i in range(len(a)-1):
        if a[i] > a[i+1]:
            return False
    return True
 
def main():
    n = ri()
    a = ria()
    b = []
    c = []
    
    even = 0
    odd = 0
    for i in a:
        if i&1:
            odd += 1
            b.append(i)
        else:
            even += 1
            c.append(i)
    
    if isSorted(a) or (isSorted(b) and isSorted(c)):
        ws("Yes")
    else:
        ws("No")


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
