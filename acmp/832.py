def f1(list):
    newList = list.copy()
    newList[0] -= 1
    newList[1] -= 1
    newList[2] += 1
    return newList


def f2(list):
    newList = list.copy()
    newList[0] -= 1
    newList[1] += 1
    newList[2] -= 1
    return newList


def f3(list):
    newList = list.copy()
    newList[0] += 1
    newList[1] -= 1
    newList[2] -= 1
    return newList


def function(list, size):

    copied_list = list.copy()

    for i in range(size):
        s = 0
        summary = 0
        for j in range(3):
            if copied_list[i][j] == 0:
                s += 1
            summary += copied_list[i][j]

            if(s >= 2):
                if(summary == 1):
                    print('Yes')
                    return
                else:
                    print('No')
                    return

    lastList = []

    for i in range(size):
        copied_list = list[i].copy()
        if copied_list[0] != 0 and copied_list[1] != 0:
            lastList.append(f1(copied_list))
        if copied_list[0] != 0 and copied_list[2] != 0:
            lastList.append(f2(copied_list))
        if copied_list[1] != 0 and copied_list[2] != 0:
            lastList.append(f3(copied_list))

    function(lastList, len(lastList))


N = int(input())

arr = []

for j in range(N):
    a, b, c = map(int, input().split())
    tmp = []

    tmp.append(a)
    tmp.append(b)
    tmp.append(c)

    arr.append(tmp)

for k in range(len(arr)):
    # Так как это рукерсия => из 1 элемента будет получаться 3
    # элемента, что-бы не париться с расширеением массива
    # можно сделать сразу его двумерным
    tmp = [arr[k]]
    function(tmp, len(tmp))
