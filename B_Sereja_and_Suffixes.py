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
    n, m = ria()
    a = ria()
    b = [0] * (n+1)
    s = set()
    for i in range(n-1, -1, -1):
      if a[i] not in s:
        s.add(a[i])
        b[i] = b[i+1] + 1
      else:
        b[i] = b[i+1]
    
    for i in range(m):
      l = ri()
      print(b[l-1])


if __name__ == '__main__':
    main()
