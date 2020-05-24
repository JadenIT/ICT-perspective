from math import pow

n = int(input())


def divisors(x):
    s = 0
    for i in range(x, 0, -1):
        if x % i == 0:
            s += 1
    return s

while len(str(n)) <= pow(2, n):
    if divisors(i) == n:
        print(i)
        break
    n += 2
