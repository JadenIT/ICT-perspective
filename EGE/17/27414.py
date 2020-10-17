s = 0
m = 0

for i in range(1016, 7937 + 1):
    if i % 3 == 0 and i % 7 != 0 and i % 17 != 0 and i % 19 != 0 and i % 27 != 0:
        s += 1
        m = i

print(s, m)
