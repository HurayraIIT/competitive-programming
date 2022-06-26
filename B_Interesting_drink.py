# Abu Hurayra
from subprocess import CalledProcessError
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
# a = list(map(int, input().split()))


def binary_search(arr: list,n: int, key: int) -> int:
  lo = 1
  hi = n
  
  # Corner Cases 
  if key >= arr[n-1]:
    return n
  if key < arr[0]:
    return 0
  
  while lo < hi:
    mid = lo + (hi - lo) // 2
    
    if arr[mid] <= key:
      lo = mid + 1
    else:
      hi = mid
      
  return lo

def main():
    n = ri()
    prices = ria()
    prices = sorted(prices)
    queries = ri()
    # wia(prices)
    for _ in range(queries):
      money = ri()
      solution = binary_search(prices, n, money)
      print(solution)


if __name__ == '__main__':
    main()
