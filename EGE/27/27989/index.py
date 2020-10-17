f = open('27989_B.txt', 'r')

a = []

f.readline()

for l in f:
    a.append(int(l))

K = 0

for i in range(len(a)):
    if a[i] % 26 == 0:
        K += len(a) - i - 1
        print(len(a) - i - 1)
    else:
        for j in range(i + 1, len(a)):
            if a[j] % 26 == 0:
                K += 1

print(K)
