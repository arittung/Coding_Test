n = int(input())


for i in range(n):
    file = input()
    if i == 0:
        result = file
    else:
        for j in range(len(result)):
            if(result[j] != file[j]):
                result = list(result)
                result[j] = '?'
                result = ''.join(result)

print(result)