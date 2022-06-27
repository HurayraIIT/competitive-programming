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
      a = list(map(int, list(rs())))
      if sum(a[:3]) == sum(a[3:]):
        print("YES")
      else:
        print("NO")
    return


if __name__ == '__main__':
    main()
