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
    count = 0
    
    while n != m:
      if n > m:
        count += n - m
        m = n
        continue
      if m%2 == 0:
        m //= 2
        count += 1
      else:
        m += 1
        count += 1
    
    print(count)


if __name__ == '__main__':
    main()
