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
    a, b, c = map(int, input().split())
    
    new_a = b - (c-b)
    if new_a>=a and new_a%a==0 and new_a!=0:
        ws("YES")
        return
    
    new_b = (a+c)/2
    if new_b>=b and new_b%b==0 and new_b!=0:
        ws("YES")
        return
        
    new_c = a + 2*(b-a)
    if new_c>=c and new_c%c==0 and new_c!=0:
        ws("YES")
        return
    
    ws("NO")

 
 
if __name__ == '__main__':
    t = ri() #    1
    while t:
        t -= 1
        main()
