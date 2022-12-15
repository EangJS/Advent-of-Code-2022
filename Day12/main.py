from collections import deque

f = open("Day12/sample.in").read().strip()


def bfs(grid, pos):
    q = deque([[pos]])
    visited = []
    while q:
        path = q.popleft()
        x, y = path[-1]
        if grid[y][x] == "E":
            return path
        e = ord(grid[y][x])
        for i, j in ((x+1, y), (x-1, y), (x, y+1), (x, y-1)):
            if 0 <= i < w and 0 <= j < h and (i, j) not in visited:
                if grid[j][i] != "E":
                    e2 = ord(grid[j][i])
                else:
                    e2 = 123
                if e2 <= e + 1:
                    q.append(path + [(i, j)])
                    visited.append((i, j))


grid = [[x for x in line] for line in f.split("\n")]
y, x = [(n, r.index("S"))
        for n, r in enumerate(grid) if "S" in r][0]  # start coordinates
y2, x2 = [(n, r.index("E"))
          for n, r in enumerate(grid) if "E" in r][0]  # end coordinates
grid[y][x] = "a"
w = len(grid[0])
h = len(grid)
final_path = bfs(grid, (x, y))
print(len(final_path)-1)


starts = [(c, r) for r in range(len(grid))
          for c in range(len(grid[0])) if grid[r][c] == "a"]
part2 = [len(bfs(grid, pos)) - 1 for pos in starts if bfs(grid, pos)]
print(min(part2))
