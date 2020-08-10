
# Problem : 10098 - Generating Fast
# Contest : UVa Online Judge
# URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1039
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
 

def next_permutation(a):
	a = list(a)
	i = len(a) - 2
	while not (i < 0 or a[i] < a[i+1]):
	    i -= 1
	if i < 0:
	    return ''
	j = len(a) - 1
	while not (a[j] > a[i]):
	    j -= 1
	a[i], a[j] = a[j], a[i] 
	a[i+1:] = reversed(a[i+1:])   
	return ''.join(a)

 
 
def main():
    pass
    n = ri()
    for x in range(n):
        s = rs()
        a = ''.join(sorted(s))
        ws(a)
        a = next_permutation(a)
        while a!='':
            ws(a)
            a = next_permutation(a)
        sys.stdout.write('\n')

 
 
if __name__ == '__main__':
    main()
