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
 
 
 
def main():
    current_yellow_crystals, current_blue_crystals = ria()
    yellow_balls, green_balls, blue_balls = ria()
    
    needed = 0
    
    yellow_crystals_needed = yellow_balls*2 + green_balls
    blue_crystals_needed = green_balls + 3 * blue_balls
    
    wi(max(0,yellow_crystals_needed-current_yellow_crystals)+max(0,blue_crystals_needed-current_blue_crystals))


 
 
if __name__ == '__main__':
    main()

