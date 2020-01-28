import sys
def get_array(): return list(map(int, sys.stdin.readline().split()))


#num = list(map(int,input().split()))

num = get_array()

num.sort()

print(num[3]-num[0], num[3]-num[1], num[3]-num[2])
