# Bismillahir Rahmanir Rahim
# Abu Hurayra - Handle: HurayraIIT
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
def generatePermutation(a):
    c = [a[0], a[1], a[2], a[0]+a[1], a[0]+a[2], a[1]+a[2], a[0]+a[1]+a[2]]
    return c
    

 
def main():
    a = ria()
    for i in range(7):
        for j in range(7):
            for k in range(7):
                if i==j or i==k:
                    continue
                b = [a[i], a[j], a[k]]
                c = generatePermutation(b)
                c.sort()
                if a == c:
                    wia(b)
                    return            
                
 
if __name__ == '__main__':
    t = ri()
    while t:
        t -= 1
        main()
