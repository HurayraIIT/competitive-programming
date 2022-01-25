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
    s = rs()
    cnt = 0
    for c in s:
        if c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='1' or c=='3' or c=='5' or c=='7' or c=='9':
                cnt += 1
    
    wi(cnt)

 
 
if __name__ == '__main__':
    main()
