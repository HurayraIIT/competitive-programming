
# Problem : 10008 - What's Cryptanalysis?
# Contest : UVa Online Judge
# URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=949
# Memory Limit : 32 MB
# Time Limit : 3000 ms
# Powered by CP Editor (https://github.com/cpeditor/cpeditor)

# Abu Hurayra
import sys
import string 
def rs(): return sys.stdin.readline().rstrip()
def ri(): return int(sys.stdin.readline())
def ria(): return list(map(int, sys.stdin.readline().split()))
def ws(s): sys.stdout.write(s + '\n')
def wi(n): sys.stdout.write(str(n) + '\n')
def wia(a): sys.stdout.write(' '.join([str(x) for x in a]) + '\n')
#a = list(map(int, input().split()))
 
 
 
def main():
    t = ri()
    a = [0]*26
    for i in range(t):
    	s = rs()
    	s = s.lower()
    	for c in s:
    		if c>='a' and c<='z':
    			index = ord(c) - 97
    			a[index] += 1
    mx = max(a)
    for i in range(mx,0,-1):
    	for x in range(0,26):
    		if a[x]==i:
    			st = f"{chr(x+65)} {a[x]}"
    			ws(st)
    			#print(a[x])
    			#print(chr(x+97)+" "+str(a[x])
	


if __name__ == '__main__': 
	main()

