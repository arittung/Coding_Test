m = -1
x = 0
y=0
for i in range(9):

    n = list(map(int, input().split()))
    if max(n) > m:
        m = max(n)
        x= i+1
        y = n.index(m)+1

print(m)
print(x, y)