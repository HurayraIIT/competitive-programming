
# Problem : 278 - Chess
# Contest : UVa Online Judge
# URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=214
# Memory Limit : 32 MB
# Time Limit : 3000 ms
# Powered by CP Editor (https://github.com/cpeditor/cpeditor)

# Abu Hurayra
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    t = ri()
    for _ in range(t):
        s, m, n = sys.stdin.readline().split()
        #print(s+" "+m+" "+n)
        s = str(s)
        m = int(m)
        n = int(n)
        if s=='r':
            wi(min(m,n))
        elif s=='k':
            if n%2!=0:
                wi((n*m+1)//2)
            else:
                wi(n*m//2)
        elif s=='Q':
            wi(min(m,n))
        elif s=='K':
            wi(((n+1)//2)*((m+1)//2))
 
 
if __name__ == '__main__':
    main()
