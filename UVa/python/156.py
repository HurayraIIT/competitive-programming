
# Problem : 156 - Ananagrams
# Contest : UVa Online Judge
# URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=92
# Memory Limit : 32 MB
# Time Limit : 3000 ms
# Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
    s = []
    m = []
    while True:
        st = list(sys.stdin.readline().split())
        m += st
        x= []
        for i in st:
            x.append(sorted(i.lower()))
        s += x
        if ord(st[0][0])==35:
            break 
    a = []
    #print(s)
    for x in s:
        #print(''.join(sorted(x)))
        a.append(''.join(sorted(x)))
    a.sort()
    
    ans = []
    for i in range(1,len(a)-1):
        if a[i]!=a[i-1] and a[i]!=a[i+1]:
            ans.append(a[i])
    if(a[len(a)-1]!=a[len(a)-2]):
        ans.append(a[len(a)-1])
        
    m.sort()
    for mm in m:
        if ''.join(sorted(mm.lower())) in ans:
            ws(mm)
    
    
 
if __name__ == '__main__':
    main()
