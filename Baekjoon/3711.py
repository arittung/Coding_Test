import sys
input = sys.stdin.readline

n = int(input())
students ={}
for i in range(n):
    num = list(map(str, input().split()))
    year =0

    birth = int(str(int(num[3])-1900) + num[2].zfill(2) + num[1].zfill(2))
 #   print(birth)
    students[num[0]] = birth
#print(students)
students = sorted(students.items(), key = lambda item: item[1])
students = dict(students)

print(list(students.keys())[n-1],list(students.keys())[0], sep='\n')