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
    n = ri()
    if n == 0:
      print(1)
    elif n%4 == 2:
      print(4)
    elif n%4 == 3:
      print(2)
    elif n%4 == 0:
      print(6)
    else:
      print(8)


if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
