n = 5
char_code = 65  # Starting character 'A'

for i in range(1, n + 1):

    row = ""

    for j in range(1, i + 1):

        row += chr(char_code) + " "
        char_code += 1

    print(row.strip())