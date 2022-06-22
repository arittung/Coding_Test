import operator
n = int(input())
words = []

for i in range(n):
    w = input()
    words.append(w)

# 중복 제거
words = set(words)
words = list(words)

# 딕셔너리
dic_words = {}
#print(words)
#print("--------------------------------")

for i in range(len(words)):
    if len(words[i]) in dic_words:
        if type(dic_words[len(words[i])]) == str:
            lst =[]
            lst.append(dic_words[len(words[i])])
        else:
            lst = dic_words[len(words[i])]

        lst.append(words[i])
        #lst = lst.sort()
        dic_words[len(words[i])] = lst
    else:
        dic_words[len(words[i])] = words[i]

#print(dic_words)

dic_words = dict(sorted(dic_words.items(), key=operator.itemgetter(0)))

#print(dic_words)



for i in dic_words:
    if type(dic_words[i]) == list:

        dic_words[i] = sorted(dic_words[i])

        for j in range(len(dic_words[i])):
            print(dic_words[i][j])
    else:
        print(dic_words[i])