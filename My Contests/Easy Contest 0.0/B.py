# Read the number
n = int(input())

# put the left and right limits in variables
left = -2**31
right = 2**31 - 1

# if n is in the range(-2^63 <= n < 2^63), print yes, otherwise print no
if left <= n and n <= right:
    print("Yes")
else:
    print("No")