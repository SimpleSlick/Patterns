n = 4
counter = 1

for i in range(1, n + 1):
    row = ""
    for j in range(1, i + 1):
        row += " " + str(counter)
        counter += 1
    print(row)