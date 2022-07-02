# Abu Hurayra
import sys
from collections import defaultdict
# import threading
# threading.stack_size(2**25)
# sys.setrecursionlimit(2**21)

def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def shraboni(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
# a = list(map(int, input().split()))

def main():
    n, m = shraboni()
    a = shraboni()
    d = defaultdict(list)
    visited = defaultdict(int)
    ans = 0
    
    for i in range(n-1):
      x, y = shraboni()
      d[x].append(y)
      d[y].append(x) 
    
    def dfs(start, parent, cat):
      nonlocal ans
      visited[start] = 1
      
      if a[start-1]:
        cat += 1
      else:
        cat = 0
      if cat > m:
        return
        
      flag = 1
      for key in d[start]:
        if visited[key]:
          continue
        flag = 0
        dfs(key, start, cat)
      if flag:
        ans += 1
    
    dfs(1, -1, 0)
    print(ans)
    
if __name__ == '__main__':
    # t = threading.Thread(target=main)
    # t.start()
    # t.join()
    main()
