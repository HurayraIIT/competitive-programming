# Abu Hurayra
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
# a = list(map(int, input().split()))


def main():
    n, k = ria()
    h = ria()
    h.append(0)
    
    temp = [0] * (n+1)
    temq = [1e9] * (n+1)
    
    for i in range(n-1, -1, -1):
      temp[i] = temp[i+1] + h[i]
    
    mn = 1e9
    idx = -1
    
    for i in range(0, n-k+1):
      temq[i] = temp[i] - temp[i+k]
      if mn > temq[i]:
        mn = temq[i]
        idx = i
    
    print(idx+1)
    

if __name__ == '__main__':
    main()
