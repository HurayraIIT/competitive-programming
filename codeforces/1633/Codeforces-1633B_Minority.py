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
    s = rs()
    zero = 0
    one = 0
    for a in s:
        if a=='0':
            zero += 1
        else:
            one += 1
    if zero>one:
        wi(one)
    elif one>zero:
        wi(zero)
    else:
        wi(max(0,one-1))

 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
