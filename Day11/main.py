import math
monkeys = [[54, 61, 97, 63, 74], [
    61, 70, 97, 64, 99, 83, 52, 87], [60, 67, 80, 65], [61, 70, 76, 69, 82, 56], [79, 98], [72, 79, 55], [63], [72, 51, 93, 63, 80, 86, 81]]
curr_monkey = []
count = [0]*8

# factor = 3 part 1
factor = 1
factors = [17, 2, 5, 3, 7, 13, 19, 11]
for i in factors:
    factor *= i

print(factor)


def round():
    for i in range(0, 8):
        curr_monkey = monkeys[i].copy()
        for item in curr_monkey:
            if i == 0:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item *= 7

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 17 == 0):
                    monkeys[5].append(item)
                else:
                    monkeys[3].append(item)
            if i == 1:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item += 8

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 2 == 0):
                    monkeys[7].append(item)
                else:
                    monkeys[6].append(item)
            if i == 2:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item *= 13

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 5 == 0):
                    monkeys[1].append(item)
                else:
                    monkeys[6].append(item)
            if i == 3:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item += 7

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 3 == 0):
                    monkeys[5].append(item)
                else:
                    monkeys[2].append(item)
            if i == 4:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item += 2

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 7 == 0):
                    monkeys[0].append(item)
                else:
                    monkeys[3].append(item)
            if i == 5:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item += 1

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 13 == 0):
                    monkeys[2].append(item)
                else:
                    monkeys[1].append(item)
            if i == 6:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item += 4

                item = item % factor  # item //= factor
                #item = math.floor(item)
                if (item % 19 == 0):
                    monkeys[7].append(item)
                else:
                    monkeys[4].append(item)
            if i == 7:
                count[i] += 1
                if monkeys[i]:
                    monkeys[i].pop(0)
                item = item*item
                item = item % factor
                #item //= factor
                #item = math.floor(item)
                if (item % 11 == 0):
                    monkeys[0].append(item)
                else:
                    monkeys[4].append(item)
    for i in monkeys:
        print(count)
        print(i)


if __name__ == "__main__":
    for i in range(0, 10000):
        round()
    print(count)
    count.sort(reverse=True)
    print(count)
    ans = (count[0]*count[1])
    print(f"Answer for part 1:{ans}")
