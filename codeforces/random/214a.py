# Abu Hurayra
# snippet-generator.app
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
    
    
    
def main():
    n, m = ria()
    count = 0
    for i in range(0,1001):
        for j in range(0,1001):
            if i*i+j==n and i+j*j==m:
                count += 1
    wi(count)
    
    
    
    
if __name__ == '__main__':
    main()