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
    t = ri()
    for _ in range(t):
      m = ri()
      
      if m >= 1900:
        print("Division 1")
      elif m >= 1600:
        print("Division 2")
      elif m >= 1400:
        print("Division 3")
      else:
        print("Division 4")

if __name__ == '__main__':
    main()
