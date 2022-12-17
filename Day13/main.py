read = open("sample.in","r").read()
pairs = [[eval(i) for i in pair.splitlines()] for pair in read.strip().split("\n\n")]


def cmp(a,b):
    if isinstance(a,int) and isinstance(b,int):
        if a==b:
            return 0
        elif a<b:
            return -1
        else:
            return 1
    elif isinstance(a,int):
        return cmp([a],b)
    elif isinstance(b,int):
        return cmp(a,[b])
    elif a and b:
        q = cmp(a[0],b[0])
        if q:
            return q
        else:
            cmp(a[1:],b[1:])
    return 1 if a else(-1 if b else 0)

count = 0
curr = 1
for i in pairs:
    print(i)
    if cmp(i[0],i[1]) == -1:
        count+=curr
        print(curr)
    curr+=1
print(count)

#unsolved ans (buggy)
