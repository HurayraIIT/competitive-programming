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
    a = {}
    for i in range(m):
      x, y = rs().split(" ")
      a[x] = y
    q = rs().split(" ")
    sol = []
    # print(q)
    for i in q:
      if len(i) <= len(a[i]):
        sol.append(i)
      else:
        sol.append(a[i])
    
    print(" ".join(sol))

if __name__ == '__main__':
    main()
