# Input Processing
solution = 0
with open("input.txt") as file:
    f = []
    for line in file:
        a = []
        for ch in list(line.rstrip()):
            if ord(ch) >= ord('a') and ord(ch) <= ord('z'):
                a.append(ord(ch) - ord('a') + 1)
            else:
                a.append(ord(ch) - ord('A') + 1 + 26)

        print(a)
        f.append(set(a))

for i in range(0, len(f), 3):
    solution += list(f[i] & f[i+1] & f[i+2])[0]
    
print(solution)