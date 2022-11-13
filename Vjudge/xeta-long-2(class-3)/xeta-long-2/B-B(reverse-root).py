from math import sqrt

while True:

    def reverse_root():
        x = int(input())
        if x != "":
            return
        reverse_root()
        print(sqrt(x))


    reverse_root()