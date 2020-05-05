def f(n, d):
    x = n * 9
    z = x
    k = 1
    while z % d:
        z = z * 10 + x
        k += 1
    return k, z / d

print(f(1, 3))