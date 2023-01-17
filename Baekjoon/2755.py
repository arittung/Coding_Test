scores ={'A+':4.3, 'A0': 4.0, 'A-': 3.7,'B+': 3.3, 'B0': 3.0,
         'B-': 2.7, 'C+': 2.3, 'C0': 2.0, 'C-': 1.7, 'D+': 1.3,
         'D0': 1.0, 'D-': 0.7, 'F': 0.0}

n = int(input())
score = 0
total_credit =0
for i in range(n):
    subject = list(input().split(" "))
    credit = int(subject[1])
    total_credit += credit
    score += credit*scores[subject[2]]
score /= total_credit


print('{:.2f}'.format(score+0.000000001))

