# a = {"갑":'0',"을":'1', "병":'2', "정":'3', "무":'4', "기":'5',
#      "경":'6', "신":'7',"임":'8', "계":'9'}
# b = {"자":'A', "축":'B', "인":'C', "묘":'D', "진":'E', "사":'F', "오":'G',
#      "미":'H', "신":'I', "유":'J',"술":'K', "해":'L'}
a = ['0', '1', '2','3','4','5','6','7','8','9']
b = ['A','B','C','D','E','F','G','H','I','J','K','L']


year = int(input())

def calc(n):
    a_num = 0
    b_num = 6
    if(n >= 0):
        for i in range(n):
            if a_num <9:
                a_num+=1
            else:
                a_num = 0

            if b_num < 11:
                b_num +=1
            else:
                b_num = 0

    else:
        n *= (-1)
        for i in range(n):
            if a_num > 0:
                a_num -= 1
            else:
                a_num = 9

            if b_num > 0:
                b_num -= 1
            else:
                b_num = 11
    return a_num, b_num



d = year - 2014
a_num, b_num = calc(d)
# print(a_num, b_num)
# print(b[b_num], a[a_num])
res = b[b_num] +a[a_num]
print(res)