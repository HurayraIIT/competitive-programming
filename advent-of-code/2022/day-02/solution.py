# Input Processing

with open("input.txt") as file:
    f = [line.rstrip().split() for line in file]
print(f)

# First Part

score = 0

for move in f:
    if move[0] == 'A':
        if move[1] == 'X':
            score += 1 + 3
        elif move[1] == 'Y':
            score += 2 + 6
        elif move[1] == 'Z':
            score += 3 + 0
    elif move[0] == 'B':
        if move[1] == 'X':
            score += 1 + 0
        elif move[1] == 'Y':
            score += 2 + 3
        elif move[1] == 'Z':
            score += 3 + 6
    elif move[0] == 'C':
        if move[1] == 'X':
            score += 1 + 6
        elif move[1] == 'Y':
            score += 2 + 0
        elif move[1] == 'Z':
            score += 3 + 3

print(score)

# Second Part

score = 0

for move in f:
    if move[0] == 'A':
        if move[1] == 'X':
            score += 0 + 3
        elif move[1] == 'Y':
            score += 3 + 1
        elif move[1] == 'Z':
            score += 6 + 2
    elif move[0] == 'B':
        if move[1] == 'X':
            score += 0 + 1
        elif move[1] == 'Y':
            score += 3 + 2
        elif move[1] == 'Z':
            score += 6 + 3
    elif move[0] == 'C':
        if move[1] == 'X':
            score += 0 + 2
        elif move[1] == 'Y':
            score += 3 + 3
        elif move[1] == 'Z':
            score += 6 + 1

print(score)