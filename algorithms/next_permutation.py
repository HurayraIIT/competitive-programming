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
    s = input()
    if next_permutation(s)=='':
        print("No successor")
    else:
        print(next_permutation(s))
    


if __name__ == '__main__':
    main()
    
    
