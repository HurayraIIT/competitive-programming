# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    n = ri()
    pos = 0
    neg = 0
    for _ in range(n):
        x, y = ria()
        if x>0:
            pos += 1
        else:
            neg += 1
    if pos <= 1 or neg <= 1:
        ws("Yes")
    else:
        ws("No")

 
 
if __name__ == '__main__':
    main()
