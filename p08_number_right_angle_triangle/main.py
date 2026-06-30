n = int(input())

for i in range(1, n + 1):
    row = ""
    for j in range(i):
        row += str(j)
    
    print(row)