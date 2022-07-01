# Abu Hurayra
import sys
from collections import defaultdict
# import threading
# threading.stack_size(2**27)
# sys.setrecursionlimit(2**21)

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
      x, n, m = ria()
      
      while n > 0 and m > 0:
        if (x//2)+10 <= x:
          x = (x//2)+10
          n -= 1
        else:
          x -= 10
          m -= 1
      if m == 0:
        while n > 0 and (x//2)+10 < x:
          x = (x//2)+10
          n -= 1
      # print(f"x = {x}, n = {n}, m = {m}")
      if n == 0:
        x = x - (m*10)
      
      if x <= 0:
        ws("YES")
      else:
        ws("NO")

if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
