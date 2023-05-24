n = int(input())
employee = {}
# 딕셔너리의 del 함수는 O(1)의 시간복잡도를 가지는 반면,
# 리스트의 remove 함수는 O(N)의 시간복잡도를 가지기 때문에 리스트를 사용한 풀이의 총 시간복잡도는 O(N^2)
for i in range(n):
    info = list(input().split())
    # print(info)

    if info[1] == 'enter':
        # print(info[0])
        employee[info[0]] = info[1]

    else:
        del employee[info[0]]
employee = dict(sorted(employee.items(), reverse=True))

for i in employee:
    print(i)
