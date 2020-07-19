# Abu Hurayra
import sys
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ri2(): return map(int, sys.stdin.readline().split())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))


def main():
	while True:
		try:
			a,b = ri2()
		except ValueError:
			break
		wi(abs(a-b))
		
		


if __name__ == '__main__':
    main()


    
    