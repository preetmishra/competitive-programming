for _ in range(int(input())):
    n, k = map(int, input().split())

    s = input()
    poss_chef = sum(1 for ch in s if ch >= 'A' and ch <= 'Z') <= k
    poss_bro = sum(1 for ch in s if ch >= 'a' and ch <= 'z') <= k

    if poss_chef and poss_bro:
        print('both')
    elif poss_chef:
        print('chef')
    elif poss_bro:
        print('brother')
    else:
        print('none')

