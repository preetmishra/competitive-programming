top, ground = 7, 0

for _ in range(int(input())):
    request = int(input())

    if abs(top - request) < abs(request - ground):
        print('B')

        top = request
    else:
        print('A')

        ground = request
