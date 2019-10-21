for _ in range(int(input())) :
    n = int(input())
    lis = list(map(int, input().split()))
    ones = negones = other = 0
    for num in lis :
        if num == 1 : 
            ones += 1
        elif num == -1 :
            negones += 1
        elif num != 0 :
            other += 1
    if (other > 1) or (negones > 1 and ones == 0) or (other != 0 and negones != 0) :
        print('no')
    else :
        print('yes')