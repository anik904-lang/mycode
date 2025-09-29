arr = [5,5,4,4,8,1,4,8,6,8,4,8,9]
s = set()

# List to store duplicates
dup = []

for n in arr:
    if n in s:
        if n not in dup:
            dup.append(n)
    else:
        s.add(n)

print(dup)