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
    n, t = ria()
    a = ria()
    a.append(0)
    b = [0] * (n+1)
    for i in range(n):
      if i == 0:
        b[i] = a[i]
      else:
        b[i] = b[i-1] + a[i]
    
    
    # print(b)
    # print(a)
      
    sol = -1
    for i in range(n):
      if t < a[i]:
        sol = max(sol, 0)
        continue
      
      l = i
      r = n - 1
      
      while l < r:
        m = r - (r-l)//2
        
        if i == 0:
          x = b[m]
        else:
          x = b[m] - b[i-1]
          
        if x <= t:
          l = m
        else:
          r = m - 1
      # print(f"for {i}: {l-i+1}")
      sol = max(sol, l - i + 1)
          
      
    print(sol)
    

if __name__ == '__main__':
    main()


"""
[3, 4, 6, 7, 0]
[3, 1, 2, 1, 0]

3, 4, 6, 7
for 0: 2

1, 3, 4
for 1: 3

2, 3
for 2: 2

1
for 3: 1


[2, 4, 7, 0]
[2, 2, 3, 0]

2, 4, 7, 0
for 0: 1
        
2, 5
for 1: 2

3
for 2: 1
"""