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
    s = rs()
    a = [0] * len(s)
    
    for i in range(len(s)-2, -1, -1):
      if s[i] == s[i+1]:
        a[i] = a[i+1] + 1
      else:
        a[i] = a[i+1]
    
    # print(a)
    
    m = ri()
    for _ in range(m):
      l, r = ria()
      print(a[l-1] - a[r-1])
      


if __name__ == '__main__':
    main()
