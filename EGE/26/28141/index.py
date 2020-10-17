f = open('26-9.txt', 'r')

S, N = map(int, f.readline().split())
A = []

for i in range(N):
    A.append(int(f.readline()))


A.sort()

total = []

for i in A:
    if i + sum(total) <= S:
        total.append(i)

for i in range(len(A)):
    if sum(total[:len(total) - 1]) + A[i] <= S:
        total.pop()
        total.append(A[i])

print(len(total), max(total))
