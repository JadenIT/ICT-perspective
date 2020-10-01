N = int(input())

# current_pascal_line - array, for example [1,4,6,4,1]

def next_pascal_line(pascal_line):
    n = []
    n.append(1)
    for i in range(len(pascal_line)):
        n.append(pascal_line[i] + pascal_line[i-1]) if i != 0 else 0
    n.append(1)
    return n


def f(pascal_line):
    print(*pascal_line)
    if len(pascal_line) == N:
        return 0
    return f(next_pascal_line(pascal_line))

print() if N == 0 else f([1])
