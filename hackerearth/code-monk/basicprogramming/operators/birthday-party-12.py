for _ in range(int(input())):
    friends, choc = map(int, input().split())

    if choc % friends == 0:
        print('Yes')
    else:
        print('No')
