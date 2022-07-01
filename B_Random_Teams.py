# Abu Hurayra
import sys
import math
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
    n, m = ria()
    p = n - (m-1)
    kmax = p * (p-1) // 2
    
    if n%m == 0:
      p = n//m
      kmin = (p * (p-1)//2) * m
    else:
      p = ((n+m-1)//m)
      kmin = (p * (p-1) // 2) * (n%m)
      # print(f"kmin {kmin}, p {p}")
      p = (n//m)
      kmin += (p * (p-1) // 2) * (m-(n%m))
      
      
    
    print(kmin, kmax)


if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
