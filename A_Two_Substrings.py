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
    s = rs()
    if s.count('A') < 2 or s.count('B') < 2 or s.count('AB') < 1 or s.count('BA') < 1:
      print('NO')
    else:
      for i in range(len(s)-3):
        if s[i]=='A' and s[i+1]=='B':
          for j in range(i+2, len(s)-1):
            if s[j]=='B' and s[j+1]=='A':
              print("YES")
              return
      for i in range(len(s)-3):
        if s[i]=='B' and s[i+1]=='A':
          for j in range(i+2, len(s)-1):
            if s[j]=='A' and s[j+1]=='B':
              print("YES")
              return
      print("NO")
      


if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
