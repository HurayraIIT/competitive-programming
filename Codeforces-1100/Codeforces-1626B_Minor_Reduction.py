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
    x =[ord(c) - ord('0') for c in input()]
    
    l = len(x)
    for i in range(l-1,0,-1):
        a = x[i-1]
        b = x[i]
        if a+b > 9:
            x[i-1] = 1
            x[i] = (a+b)-10
            print(''.join([str(a) for a in x]))
            return
        
    x[1] = x[1] + x[0]
    x.pop(0)
    print(''.join([str(a) for a in x]) + '\n')


 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
