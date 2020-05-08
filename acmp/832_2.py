def f(array):
    while True:
        array.sort()
        if array[2] == 0 or array[1] == 0:
            break

        min_num = array[2]
        if array[1] < min_num:
            min_num = array[1]

        array[2] -= min_num
        array[1] -= min_num
        array[0] += min_num

    if sum(array) == 1:
        print('Yes')
    else:
        print('No')


array = [

]

N = int(input())

for j in range(N):
    a, b, c = map(int, input().split())
    tmp = []

    tmp.append(a)
    tmp.append(b)
    tmp.append(c)

    array.append(tmp)

for i in array:
    f(i)
