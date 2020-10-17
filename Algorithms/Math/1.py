# Найдите наибольшее пятизначное число у котрого суммы
# 1-й и 2-й, 2 и 3, 3 и 4, 4 и 5, 5 и 1 цифер
# являются простыми числами

sieve = list(range(0, 10**3 + 1))

n = sieve[len(sieve) - 1]

for i in range(2, len(sieve)):
    if i**2 <= n:
        for j in range(i**2, len(sieve), +i):
            sieve[j] = 0 if i != j else sieve[j]

for i in sieve:
    if i != 0 and i >= 2:
        pass

for x1 in range(0, 10):
    for x2 in range(0, 10):
        for x3 in range(0, 10):
            for x4 in range(0, 10):
                for x5 in range(0, 10):
                    if x1 + x2 in sieve and x2 + x3 in sieve and x3 + x4 in sieve and x4+x5 in sieve and x5+x1 in sieve:
                        print(x1, x2, x3, x4, x5)
