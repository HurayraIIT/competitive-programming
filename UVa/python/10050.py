
# Problem : 10050 - Hartals
# Contest : UVa Online Judge
# URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=991
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
    t = ri()
    for _ in range(t):
    	n = ri()
    	p = ri()
    	a =[]
    	lst = [False]*(n+1)
    	for i in range(p):
    		b = ri()
    		a.append(b)
    	#wia(a)
    	
    	for i in a:
    		x = i
    		for j in range(i,n+1,i):
    			#print(j)
    			if j%7!=0 and j%7!=6:
    				lst[j] = True
    	'''
    	for i in range(1,n+1):
    		for j in a:
    			if i%j==0:
    				if i%7!=0 and i%7!=6:
    					lst[i] = True
    					break
    	'''
    	cnt = 0
    	
    	
    	for i in range(1,n+1):
    		if lst[i]==True:
    			cnt += 1
    	wi(cnt)
    


 
 
if __name__ == '__main__':
    main()
