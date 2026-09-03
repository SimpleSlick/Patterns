n = int(input())

for i in range(1, n + 1):
    row_content = ""

    for j in range(i):
        row_content += str(i + j) + " "

    row_content = row_content.strip()

    last_row = ""

    for j in range(n):
        last_row += str(n + j) + " "

    last_row = last_row.strip()

    spaces = " " * (len(last_row) - len(row_content))

    print(spaces + row_content)