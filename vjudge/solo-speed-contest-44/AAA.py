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
    n = ri()
    a = ria()
    
    for i in range(1, n):
      if a[i-1] > a[i]:
        print("No")
        return
    
    print("Yes")
    return
    


if __name__ == '__main__':
    main()
