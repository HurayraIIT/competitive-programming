# Abu Hurayra
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    d = {}
    n = ri()
    for _ in range(n):
        s = rs()
        if s not in d:
            print('OK')
            d[s] = 0
        else:
            d[s] += 1
            print(s + str(d[s]))



 
 
if __name__ == '__main__':
    main()
