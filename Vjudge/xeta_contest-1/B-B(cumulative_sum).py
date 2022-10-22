# lst = []
n = int(input())
lst = [n]
# for i in range(n):
#     x = int(input())
#     lst.append(x)

# print(lst)

lst = list(map(int, input().split()))
sum_arr =[]
sum_arr.append(lst[0])
for i in range(1, len(lst)):
    sum_arr.append(lst[i] + sum_arr[i-1])

q = int(input())
for i in range(q):
    num1, num2 = map(int,input().split())
    # sum_arr[0]=sum_arr[0]
    if num1 > 0:
        result = sum_arr[num2] - sum_arr[num1 - 1]
    elif num1 == 0:
        result = sum_arr[num2]

    # print(sum_arr)

    print(result)