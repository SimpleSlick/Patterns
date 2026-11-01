n = 5

for i in range(1, n + 1):
    row = ""

    spaces = "  " * (n - i)

    for j in range(1, i + 1):
        row += str(j)

    for j in range(i - 1, 0, -1):
        row += str(j)

    print(spaces + row)