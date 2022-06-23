n, m = map(int, input().split())

site_dic ={}
for i in range(n):
    addr, pw = input().split()
    site_dic[addr] = pw

for i in range(m):
    find = input()
    print(site_dic[find])
