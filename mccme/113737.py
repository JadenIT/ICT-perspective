A, B, C = int(input()), int(input()), int(input())

S = 0

S += (B - A) // C

if A % C == 0 or B % C == 0:
    S += 1

print(S)
