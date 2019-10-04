limit = int(input())

for _ in range(int(input())):
    w, h = list(map(int, input().split()))

    if w < limit or h < limit:
        print('UPLOAD ANOTHER')
    elif w == h:
        print('ACCEPTED') 
    else:
        print('CROP IT')
