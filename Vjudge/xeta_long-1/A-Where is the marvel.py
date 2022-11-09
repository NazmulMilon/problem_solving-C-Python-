from bisect import bisect_left, bisect_right

while True:
    case = 0
    N, Q = map(int, input().split(" "))
    if N == 0 and Q == 0:
        break
    print("CASE# ", ++case)
    lst = []
    for i in range(N):
        a = int(input())
        lst.append(a)
    lst.sort()
    # print(lst)
    while Q==False:
        que = int(input())
        answer = bisect_left(a, lst, que)
        if lst[answer] == que:
            print(que, "fround at", answer+1)
        else:
            print("not found")


