n = int(input())

# top portion
for i in range(1, n + 1):
    stars = "*" * i
    print(stars)

# Bottom portion
for i in range(n - 1, 0, -1):
    stars = "*" * i
    print(stars)