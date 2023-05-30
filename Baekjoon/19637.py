from sys import stdin

n, m = map(int, stdin.readline().split())

info = [stdin.readline().split() for _ in range(n)]

def BinarySearch(info, target):
    low = 0
    high = len(info) - 1
    if target <= int(info[low][1]):
        return low

    else:

        while (low < high):
            mid = int((low + high) / 2)
            if (target <= int(info[mid][1])):
                high = mid
            else: # target > vlst[mid]
                low = mid+1

        return (high)

for i in range(m):
    c = int(stdin.readline())

    print(info[BinarySearch(info, c)][0])

