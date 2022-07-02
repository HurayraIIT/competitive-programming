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
    t = ri()
    for _ in range(t):
      n = ri()
      m = n // 2
      sum = 8 * m * (m+1) * (2*m + 1) // 6
      print(sum)

if __name__ == '__main__':
    main()
