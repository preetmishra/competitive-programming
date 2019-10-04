for _ in range(int(input())):
    flag = True
    dikt = {}
    dikt[(0, 0)], dikt[(0, 1)], dikt[(1, 0)], dikt[(1, 1)] = list(map(int, input().split()))

    for i in range(2):
        for j in range(2):
            for k in range(2):
                if dikt[(dikt[(i, j)], k)] != dikt[(i, dikt[(j, k)])]:
                    flag = False
                    break
    
    if flag:
        print('Yes')
    else:
        print('No')