# Abu Hurayra
import sys
from collections import defaultdict
# import threading
# threading.stack_size(2**24)
# sys.setrecursionlimit(2**21)

def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
# a = list(map(int, input().split()))


def main():
    n, m, k = ria()
    a = []
    for i in range(m+1):
      b = ri()
      a.append(b)
    ans = 0
    
    for i in a[:-1]:
      # print(i)
      # print(bin(i ^ a[-1]).count('1'))
      if bin(i ^ a[-1]).count('1') <= k:
        ans += 1
    print(ans)


if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
