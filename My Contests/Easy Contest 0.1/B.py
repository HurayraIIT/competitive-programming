# Take input in an array
a = list(map(int, input().split()))

# Sort a
a.sort()

# Check if a is an arithmetic sequence
if a[2]-a[1] == a[1]-a[0]:
    print("Yes")
else:
    print("No")