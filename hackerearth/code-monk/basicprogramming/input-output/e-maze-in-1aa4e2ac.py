dikt = {
    'L': (-1, 0),
    'R': (1, 0),
    'D': (0, -1),
    'U': (0, 1)
}

s = input()
init_x = 0
init_y = 0

for i in s:
    init_x += dikt[i][0]
    init_y += dikt[i][1]

print(init_x, init_y)
