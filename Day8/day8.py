f = open("Day8/input.txt", "r")
input = f.readlines()
rows = 0
forest = []
for i in input:
    forest.append(i.strip())
    rows += 1
# ignore first row
depth = len(forest)
width = len(forest[0])

count = 0

edges = depth*2 + width*2 - 4

a = 0
b = 0
c = 0
d = 0

highest = 0

for i in range(1, width-1):  # forest[depth][width]
    for j in range(1, depth-1):
        curr = forest[i][j]
        found = False
        for k in range(i-1, 0-1, -1):  # checks top
            a = i-k
            if forest[k][j] >= curr:
                break
            if k == 0 and k != i:
                count += 1
                found = True
        if found:
            print(f"{i} and {j} and {curr}")
            # continue #part two
        for k in range(i+1, depth):  # checks bottom
            b = k-i
            if forest[k][j] >= curr:
                break
            if k == depth-1 and k != i:
                count += 1
                found = True
        if found:
            print(f"{i} and {j} and {curr}")
            # continue #part two
        for k in range(j-1, -1, -1):  # checks left
            c = j-k
            if forest[i][k] >= curr:
                break
            if k == 0 and k != j:
                count += 1
                found = True
        if found:
            print(f"{i} and {j} and {curr}")
            # continue #part two
        for k in range(j+1, width):  # checks right
            d = k-j
            if forest[i][k] >= curr:
                break
            if k == width-1 and k != j:
                count += 1
                found = True
        if found:
            print(f"{i} and {j} and {curr}")
            # continue #part two
        if a*b*c*d > highest:  # part 2
            highest = a*b*c*d

# print(highest) #part two
# print(count+edges) #part one
