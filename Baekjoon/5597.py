import sys
input = sys.stdin.readline


students = [0 for i in range(30)]
for i in range(28):
    n = input().strip()
    students[int(n)-1] = 1
    #print(students)

pos = [i+1 for i in range(30) if students[i] == 0]
print(*pos, sep='\n')
