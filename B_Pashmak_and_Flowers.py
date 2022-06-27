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
    b = ria()
    b = sorted(b)
    max_diff = b[-1] - b[0]
    
    i = 0
    j = n-1
    x = b.count(b[0])
    y = b.count(b[-1])
    
    # print(x)
    sol = 0
    if b[0]==b[-1]:
      sol = ( (x) * (x-1) ) // 2
    else:
      sol = x * y
    print(f"{max_diff} {sol}")


if __name__ == '__main__':
    main()
