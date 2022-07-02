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
    m, s = ria()
    
    if m == 1 and s <= 1:
      print(f'{s} {s}')
      return
    
    if s <= 0 or s > m*9:
      print("-1 -1")
      return
    
    min_num = ['0'] * m
    max_num = ['0'] * m
    
    temp = s - 1
    # print(temp)
    i = m-1
    while temp > 0 and i >= 0:
      if temp > 9:
        min_num[i] = '9'
        temp -= 9
      elif 0 < temp < 10:
        min_num[i] = str(temp)
        temp = 0
      i -= 1
    # print(min_num)
    min_num[0] = str(int(min_num[0]) + 1)
    
    temp = s
    i = 0
    while temp > 0 and i < m:
      if temp > 9:
        max_num[i] = '9'
        temp -= 9
      elif 0 < temp < 10:
        max_num[i] = str(temp)
        temp = 0
      i += 1
    
    print(''.join(min_num), ''.join(max_num))


if __name__ == '__main__':
    main()
