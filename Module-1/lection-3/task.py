n = int(input())
my_list = [int(i) for i in input().split()]

for i in range(1, n):
    key = my_list[i]
    j = i - 1
    while j >= 0 and key <= my_list[j]:
        my_list[j+1] = my_list[j]
        j -= 1
    my_list[j+ 1] = key
print(*my_list)
