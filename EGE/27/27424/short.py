array = [[int(line.split()[0]), int(line.split()[1])]
         for line in open('27-A_demo.txt', 'r') if len(line.split()) != 1]

differences = [abs(i[0] - i[1]) for i in array if abs(i[0] - i[1]) %
               3 != 0 and abs(i[0] - i[1]) != 0]


sequence = [i[0] if i[0] > i[1] else i[1] for i in array]

print(sum(sequence) - min(differences)
      ) if sum(sequence) % 3 == 0 else print(sum(sequence))
