n = int(input())
array = [int(i) for i in input().split()]
element = int(input())
count= 0

for i in array:
    if i != element:
        count+= 1
print(count)
