f = open("Day20/sample.in", "r").read()

data = f.split("\n")
data.pop()
size = len(data)
original = data.copy()


def find_list(i):  # linear search
    pos = 0
    for j in data:
        if i == j:
            return pos
        pos += 1


for i in original:
    pos = find_list(i)
    i = int(i)
    data.pop(pos)
    if (pos+i >= size):
        point = (pos+i+1) % size
        data.insert(point, str(i))
    else:
        data.insert(pos+i, str(i))
temp = data.pop(0)
data.append(temp)

ans = 0

pos = find_list('0')
for i in range(0, 3001):
    if pos >= size:
        pos = 0
    if i == 1000:
        ans += int(data[pos])
    if i == 2000:
        ans += int(data[pos])
    if i == 3000:
        ans += int(data[pos])
    pos += 1
print(ans)
