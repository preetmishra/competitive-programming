for _ in range(int(input())):
    a = input()
    b = input()

    dikt = {}
    flag_dikt = {}

    for ch in a:
        if ch in dikt:
            dikt[ch] += 1
        else:
            dikt[ch] = 1

    for ch in b:
        if ch in dikt:
            if dikt[ch] == 0:
                flag_dikt[ch] = True

            try:
                if flag_dikt[ch]:
                    dikt[ch] += 1
            except:
                dikt[ch] -= 1
        else:
            dikt[ch] = 1
            flag_dikt[ch] = True

    count = sum(val for val in dikt.values() if val != 0)

    print(count)
