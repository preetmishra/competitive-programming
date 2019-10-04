bricks = int(input())
i = 1

while bricks > 3 * i:
    bricks -= 3 * i

    i += 1

if bricks <= i:
    print('Patlu')
else:
    print('Motu')
