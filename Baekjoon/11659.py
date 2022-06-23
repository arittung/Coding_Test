import sys
input = sys.stdin.readline
n, m = map(int, input().split())
num = list(map(int, input().split()))

sum_lst = [0]
sum = 0
for i in range(len(num)):
    sum += num[i]
    sum_lst.append(sum)

#print(sum_lst)
for i in range(m):
    a, b = map(int, input().split())

    print(sum_lst[b] - sum_lst[a-1])