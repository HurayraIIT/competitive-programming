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
    data = []
    for _ in range(n):
      price, quality = ria()
      data.append([price, quality])
    
    data.sort(key= lambda row: (row[0], row[1]))
    
    for i in range(1, n):
      if data[i][0] > data[i-1][0] and data[i][1] < data[i-1][1]:
        print("Happy Alex")
        return
    print("Poor Alex")


if __name__ == '__main__':
    main()
