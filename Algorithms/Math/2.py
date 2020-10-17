# На доске написано несколько чисел с числителем равным одному
# их сумма равна 1, известно, что одна из этих дробей = 1/21
# какое минимальное количество дробей могло быть написано?

numerator = 1
denominators = [21]

def multiply(list):
    s = 1
    for i in list:
        s *= i
    return s

def print_fraction(denominators):
    for i in range(len(denominators)):
        print(numerator, '/', denominators[i])


for x in range(2, 10**9):
    # Общий знаменатель
    common_denominator = multiply(denominators) * x

    # Домножаем каждый числитель, что-бы привести к общему знаменателю
    t = [numerator * common_denominator // denominators[i]
         for i in range(len(denominators))]

    # Добавляем новое слагаемое
    t.append(numerator * common_denominator / x)

    # Проверяем если при добавлении нового слагаемого сумма меньше или равна 1
    if sum(t) / common_denominator <= 1:
        # Плюсуем этот знаменатель
        denominators.append(x)

    if sum(t) / common_denominator == 1:
        print('Fractions:', len(denominators))
        print_fraction(denominators)
        break
