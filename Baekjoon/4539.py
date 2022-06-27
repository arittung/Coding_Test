import sys
input = sys.stdin.readline

n = int(input())

for i in range(n):
    x = int(input())
    x = list(map(int, str(x)))
    #print(x)
    res = []
    for j in range(len(x)-1, 0, -1):
    #    print(x)
    #    print(x[j])
        if x[j] >= 5:
            x[j-1] += 1
            res.append(0)
        else:
            res.append(0)
    res.append(x[0])
    k = 1
    sum = 0
    for j in range(len(res)):
        sum += k*res[j]
        k*=10
    print(sum)