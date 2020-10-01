N, M = map(int, input().split())
mem = [[0 for i in range(M + 3)] for j in range(N + 3)]

def f(x, y):
    if x == N and y == M:
        return 1
    elif x > N or y > M:
        return 0
    else:
        if mem[x + 2][y + 1] == 0:
            mem[x + 2][y + 1] = f(x + 2, y + 1)
        if mem[x + 1][y + 2] == 0:
            mem[x + 1][y + 2] = f(x + 1, y + 2)
        return mem[x + 2][y + 1] + mem[x + 1][y + 2]

print(f(1, 1))
