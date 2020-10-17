def sieve(L):
    L += 1
    sieve = [x for x in range(L)]

    for i in range(2, L):
        if i**2 <= L:
            for j in range(i**2, L):
                if j % i == 0:
                    sieve[j] = 0

    return [x for x in sieve if x != 0][1:]


sieve = sieve(245756)

for i in range(245690, 245756 + 1):
    if i in sieve:
        print(i - 245690 + 1, i)
