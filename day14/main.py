sea = set()
count = 0
for line in open("sample.in"):
    x = [list(map(int,p.split(","))) for p in line.strip().split("->")]
    for (x1,y1),(x2,y2) in zip(x,x[1:]):
        print(f"{x1},{y1}")
        print(f"{x2},{y2}")
        for i in range(x1,x2+1):
            for j in range(y1,y2+1):
                sea.add(i+j * 1j)
                count = max(count,j+1)
t = 5
t += 1j
print(t)
