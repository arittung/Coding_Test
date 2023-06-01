money = int(input())
money = 1000 - money
num = 0

a = (money // 500)
num += a
money -= (a*500)
# print(a)

b = (money // 100)
num+=b
money -= (b*100)

c = (money // 50)
num+= c
money -= (c*50)

d = (money // 10)
num +=d
money -=(d*10)

e = (money // 5)
num +=e
money -=(e*5)

num+= money
# print(a, b, c, d)
print(num)
