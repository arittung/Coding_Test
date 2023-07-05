n = int(input())
arr = list(map(int, input().split()))
# print(arr)
students = []
for i in range(n):
    if arr[i] ==0:
        students.append(i+1)
    else:
        students.insert(i-arr[i], i+1)
    # print(students)

for i in range(n):
    print(students[i])