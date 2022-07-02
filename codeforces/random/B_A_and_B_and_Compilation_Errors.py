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
    a = sorted(a)
    b = ria()
    b = sorted(b)
    b.append(0)
    c = ria()
    c = sorted(c)
    c.append([0, 0])
    
    
    for i in zip(a, b):
      if i[0] != i[1]:
        print(i[0])
        break
    
    for i in zip(b, c):
      if i[0] != i[1]:
        print(i[0])
        break


if __name__ == '__main__':
    main()
