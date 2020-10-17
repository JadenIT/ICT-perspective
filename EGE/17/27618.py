
s = 0
k = 0

for i in range(7487, 10006 + 1):
    if i % 13 == 0 and i % 3 != 0 and i % 5 != 0 and i % 17 != 0 and i % 22 != 0:
        k += 1
        s = i

print(k, s)
