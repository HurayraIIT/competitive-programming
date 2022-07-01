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
      n = ri()
      a = ria()
      d = defaultdict(int)
      sim_max = 0
      for i in a:
        d[i] += 1
        sim_max = max(sim_max, d[i])
      sol1 = min(sim_max-1, len(d))
      sol2 = min(sim_max, len(d)-1)
      print(max(sol1, sol2))
      # if(len(d)==1):
      #   print(0)
      #   continue
      # if len(d) == n:
      #   print(1) 
      #   continue   
      # print(min(sim_max-1, len(d)))

if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
