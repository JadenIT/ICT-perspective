array = []

for line in open('27-B_demo.txt'):
    if len(line.split()) != 1:
        array.append([int(line.split()[0]), int(line.split()[1])])

# Разности элементов пары
differences = []
for i in array:
    # Уберем разности кратные трем и нули
    if abs(i[0] - i[1]) % 3 != 0 and abs(i[0] - i[1]) != 0:
        differences.append(abs(i[0] - i[1]))

# Выбираем нибольший элемент из каждой пары
sequence = []
for i in array:
    sequence.append(i[0]) if i[0] > i[1] else sequence.append(i[1])

# Если сумма элементов кратна трем, то найдем такую пару у которой
# разность элементов минимальна и не кратная трем и не равна нулю
# и вычтем ее, тем самым, сумма перестанет быть кратной трем
if sum(sequence) % 3 == 0:
    print(sum(sequence) - min(differences))
else:
    print(sum(sequence))
