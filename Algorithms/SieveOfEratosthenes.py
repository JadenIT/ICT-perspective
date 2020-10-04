sieve = list(range(0, 10**2 + 1))

n = sieve[len(sieve) - 1]

for i in range(2, len(sieve)):
    if i**2 <= n:
        for j in range(i**2, len(sieve), +i):
                sieve[j] = 0 if i != j else sieve[j]

for i in sieve:
    if i != 0 and i >= 2:
        print(i, end=', ')
        pass