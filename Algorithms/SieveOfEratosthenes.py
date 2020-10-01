N = 10

sieve = list(range(0, 100000))

for i in range(2, len(sieve)):
    for j in range(i, len(sieve), +i):
        sieve[j] = 0 if i != j else sieve[j]

for i in sieve:
    if i != 0 and i >= 2:
        print(i, end=', ')
