for _ in range(int(input())):
    n = int(input())
    ls = list(map(int, input().split()))
    
    maxim = max(ls)
    minim = min(ls)

    for i in ls:
        if i == maxim:
            maxim = 0
            print(i, end = ' ')
            break

        if i == minim:
            minim = 0
            print(i, end = ' ')
            break

    if maxim == 0:
        print(minim)
    elif minim == 0:
        print(maxim)
