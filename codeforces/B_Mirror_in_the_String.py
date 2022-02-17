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
    s = rs()
    ans = str(s[0])
    for i in range(1,n):
        if s[i]<=s[i-1]:
            ans += s[i]
        else:
            break
    
    print(ans+ans[::-1])


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
