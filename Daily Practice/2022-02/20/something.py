
# Take input as integer
hours = int(input())

# This variable will hold salary
salary = 0

# compute the salary
if hours <= 40:
    salary = hours * 200
else:
    # 8000 for first 40 hours, and 300 for other hours
    salary = 8000 + 300 * (hours - 40)

# Print the salary 
print(salary)
