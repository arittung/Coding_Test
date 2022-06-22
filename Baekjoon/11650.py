import operator

n = int(input())
dic = {}
for i in range(n):

    a, b = map(int, input().split())
    if a in dic:
        if type(dic[a]) == int:
            lst = []
            lst.append(dic[a])
        else:
            lst = dic[a]

        lst.append(b)
        # lst = lst.sort()
        dic[a] = lst
    else:
        dic[a] = b
dic = dict(sorted(dic.items(), key=operator.itemgetter(0)))
#print(dic)

for i in dic:
    if type(dic[i]) == list:

        dic[i] = sorted(dic[i])

        for j in range(len(dic[i])):
            print(i, dic[i][j])
    else:
        print(i, dic[i])