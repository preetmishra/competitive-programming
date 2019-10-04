toffees = 0

for _ in range(int(input())):
    radius, horlicks = list(map(int, input().split()))

    if (2 * 22 * radius) <= (700 * horlicks):
        toffees += 1

print(toffees)