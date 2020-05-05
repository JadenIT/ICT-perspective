N = int(input())

arr = []

for i in range(9, 1, -1):
    while(N % i == 0):
        N /= i
        arr.append(i)

if(len(arr) > 0):
    arr.sort()
    k = ""
    for i in arr:
        k += str(i)
    print(k)

else:
    print("-1")
