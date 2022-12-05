a = 0 # The Max Number
b = 0 # The 2nd Max
c = 0 # The 3rd Max

with open("input.txt") as file:
    temp = 0
    
    f = [line.rstrip() for line in file]
    f.append("")
    
    for line in f:
        if line == "":
            if temp >= a:
                c = b
                b = a
                a = temp
            elif temp >= b:
                c = b
                b = temp 
            elif temp >= c:
                c = temp
            temp = 0
        else:
            temp = temp + int(line)
    
print(a, b, c)
print(a+b+c)