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
    if n%2 == 0:
        wi(0)
    else:
        p = str(n)
        cnt = 0
        flg = 0
        if p[0]=='0' or p[0]=='2' or p[0]=='4' or p[0]=='6' or p[0]=='8':
            flg = 1
        for i in p:
            if i=='0' or i=='2' or i=='4' or i=='6' or i=='8':
                cnt += 1
        
        
        if flg == 1:
            wi(1)
        elif cnt > 0:
            wi(2)
        else:
            wi(-1)

 
 
if __name__ == '__main__':
    t = ri()
    while t:
        t -= 1
        main()
