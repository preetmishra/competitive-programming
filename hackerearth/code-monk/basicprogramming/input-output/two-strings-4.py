for _ in range(int(input())):
    s1, s2 = list(input().split())

    dikt = {}
    flag = False

    for ch in s1:
        if ch in dikt:
            dikt[ch] += 1
        else:
            dikt[ch] = 1

    for ch in s2:
        if ch not in dikt:
            print('NO')
            flag = True
            break
        else:
            if s2.count(ch) != dikt[ch]:
                print('NO')
                flag = True
                break

    if not flag:
        print('YES')
