
t = int(input())
print()
for z in range(t):
    n = int(input())
    freq = int(input())
    for x in range(freq):

        for i in range(1, n + 1):
            for j in range(1, i + 1):
                print(i, end="")
            print()

        for i in range(n - 1, 0, -1):
            for j in range(i, 0, -1):
                print(i, end="")
            print()
        print()
print(end="")