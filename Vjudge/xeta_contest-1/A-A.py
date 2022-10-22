
while True:

    try:
        s, t = input().split()

        # t = t.split()
        len1 = len(s)
        len2 = len(t)

        i = 0
        for j in range(len2):
            if i == len1:
                break
            if s[i] == t[j]:
                i += 1
        if i == len1:
            print("Yes")
        else:
            print("No")

    except EOFError:
        break

