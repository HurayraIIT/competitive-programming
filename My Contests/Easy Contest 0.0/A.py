import math

# There are t test cases
t = int(input())

# A loop for all of the test cases
for i in range(t):
    
    # In each test case, there is a number n
    n = int(input())
    
    # Find the square root and 
    # round it down to the nearest integer
    ans = math.floor(math.sqrt(n))
    
    # Print the ans
    print(ans)