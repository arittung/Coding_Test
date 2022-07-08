import sys
input = sys.stdin.readline

n = int(input().strip())
#print(n)
dec = []

def exe(command):
    #print("command!!: ", command)
    if command == 'pop_front':
        if len(dec) == 0:
            print(-1)
        else :
            print(dec[0])
            del dec[0]
    elif command == 'pop_back':
        if len(dec) == 0:
            print(-1)
        else :
            last=dec.pop()
            print(last)
    elif command == 'size':
        print(len(dec))
    elif command == 'empty':
        if len(dec) == 0:
            print(1)
        else:
            print(0)
    elif command == 'front':
        if len(dec) == 0:
            print(-1)
        else :
            print(dec[0])
    else:
        if len(dec) == 0:
            print(-1)
        else :
            print(dec[-1])

for i in range(n):
    command = list(input().strip().split())
    #print("command: ", command, len(command))

    if(len(command) == 2):
        if(command[0] == "push_back"):
            dec.append(command[1])
        else:
            dec.insert(0, command[1])
    else:
        exe(command[0])
    #print("dec: ",dec)