n, m = map(int, input().split())

ball = [i+1 for i in range(n)]
for i in range(m):
    a, b = map(int, input().split())
    tmp = ball[a-1]
    ball[a-1] = ball[b-1]
    ball[b-1] = tmp

for i in range(n):
    print(ball[i], end=" ")
