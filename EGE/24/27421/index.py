f = open('test.txt')

s = f.read()

m = 0
k = 2
for i in range(1, len(s) - 1):
    if s[i] != s[i - 1] and s[i] != s[i+1]:
        k += 1
    else:
        
        if k > m:
            m = k
        k = 2

print(m)