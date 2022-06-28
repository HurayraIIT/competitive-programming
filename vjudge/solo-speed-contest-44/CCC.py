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
    h, w = ria()
    
    if h==1 or w==1:
      print(1)
      return
    
    x = ((h+1)//2) * ((w+1)//2) + (h//2) * (w//2)
    
      
    
    print(x)


if __name__ == '__main__':
    main()
