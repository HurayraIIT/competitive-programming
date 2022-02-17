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

def isPalindrome(s:str) -> bool:
    a = s[::-1]
    return a == s
 
 
def main():
    s = rs()
    flg = 0
    for i in s:
        if i != 'a':
            flg = 1
            break
        
    if flg == 0:
        ws("NO")
    else:
        ws("YES")
        if isPalindrome("a" + s):
            print(s+"a")
        else:
            print("a"+s)


 
 
if __name__ == '__main__':
    t = ri() #    1
    for _ in range(t):
        main()
