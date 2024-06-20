n = int(input())
array = [int(i) for i in input().split()]
array2 = []
for i in range(n):
    if array[i] != 0:
        array2.append(array[i])

for i in range(n - len(array2)):
    array2.append(0)


print(*array2)
