def gcd(a, b):
    while(a != 0 and b != 0):
        if(a > b):
            a %= b
        else:
            b %= a
    return a + b


n = int(input())

allVariants = []

for i in range(1, n + 1):
    for j in range(1, n + 1):
        if(i < j and gcd(i, j) == 1):
            allVariants.append([i, j])


def sort(array):

    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[0][0] / array[0][1]

        for x in array:
            num = x[0] / x[1]

            if num < pivot:
                less.append(x)
            elif num == pivot:
                equal.append(x)
            elif num > pivot:
                greater.append(x)

        return sort(less)+equal+sort(greater)
    else:
        return array


allVariants = sort(allVariants)

for i in allVariants:
    print(str(i[0])+"/"+str(i[1]))
