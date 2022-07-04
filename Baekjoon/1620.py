import sys
input = sys.stdin.readline

n, m = map(int, input().strip().split())

pokemons ={}

for i in range(n):
    pokemon = input().strip()
    pokemons[pokemon] = str(i+1)
    pokemons[str(i+1)] = pokemon

#print(pokemons)
for i in range(m):
    pokemon = input().strip()
    try:
        print(pokemons[pokemon])

    except:
        print(pokemons[pokemon])