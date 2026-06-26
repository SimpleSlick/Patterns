n = int(input())

for i in range(n):
    row =""
    for j in range(i + 1):
        if(i + j) % 2 == 0:
            row += "1 "
        else:
            row += "0 "
        
    print(row)