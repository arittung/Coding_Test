import sys
input = sys.stdin.readline

n, m = map(int, input().split())

words = []
for i in range(n):
    word = input()
    words.append(word)
sum =0
for i in range(m):
    word = input()
    if word in words:
        sum+=1

print(sum)