n = 5

# Top portion
for i in range(1, n + 1):
    spaces = " " * (n - i)
    stars = "* " * i

    print(spaces + stars)

# Bottom portion
for i in range(n - 1, 0, -1):
    spaces = " " * (n - i)
    stars = "* " * i

    print(spaces + stars)