import sys
input = sys.stdin.readline

n = int(input())

info = {}
for i in range(n):
    age, name = input().split()

    if int(age) in info:
        if type(info[int(age)]) == str:

            lst =[]
            lst.append(info[int(age)])
        else:

            lst = info[int(age)]

        lst.append(name)
        #lst = lst.sort()

        info[int(age)] = lst
    else:
        info[int(age)] = name

info = sorted(info.items())
#print(info)
info = dict(info)
for key, value in info.items():
    if(type(value) == list):
        for i in range(len(value)):
           print(key, value[i])
    else:
        print(key, value)