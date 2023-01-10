
str_lst = []
for i in range(100):
    try:
        str = input()
    except:
        break

    str_lst.append(str)

for i in str_lst:
    print(i)