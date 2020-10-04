# N = 3
# M = 2
# K = [3, 1, 5, 2]

N, M, t = int(input()), int(input()), int(input())

K = []

for i in range(t):
    K.append(int(input()))

for t in K:
    if t % N == N:
        pass
    elif t % N + 1 > M:
        M += 1
    elif t % N + 1 == M:
        M = 1

print(M)
