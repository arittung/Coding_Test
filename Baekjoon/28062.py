n = int(input())
odd = [] # 홀수
# even = [] # 짝수
candy = 0

a = list(map(int, input().split()))

for i in range(n):

    if a[i]%2 ==0:
        candy+=a[i]
    else:
        odd.append(a[i])

if len(odd) == 1 and candy == 0:
    print(0)
else:
    if len(odd)%2==0:
        candy += sum(odd)
    else:
        candy += sum(odd)
        odd = sorted(odd)
        # print(odd[0])
        candy -= odd[0]

    print(candy)

