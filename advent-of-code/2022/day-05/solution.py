count = 0
overlap_count = 0
with open("input.txt") as f:
    lines = [ line.strip().split(',') for line in f]
    for line in lines:
        x, y = map(int, line[0].split('-'))
        
        a, b = map(int, line[1].split('-'))
        print(line)
        print(x, y, a, b)
        if (a >= x and b <= y) or (x >= a and y <= b):
            count += 1
        
        if (a>=x and a<=y) or (b>=x and b<=y) or (x>=a and x <=b) or (y>=a and y<=b):
            overlap_count += 1
            print(f"test {line}")

print(count)
print(overlap_count)