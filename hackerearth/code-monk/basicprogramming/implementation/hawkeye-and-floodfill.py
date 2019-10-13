n = int(input())
hit_i, hit_j, power = map(int, input().split())

for i in range(n):
    for j in range(n):
        dist = max(abs(hit_i - i), abs(hit_j - j))
        if dist >= power:
            print(0, end=' ')
        else:
            print(power - dist, end=' ')
    print()
