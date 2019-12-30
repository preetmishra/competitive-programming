for _ in range(int(input())):
    dikt = {}

    for i in range(int(input())):
        p, s = map(int, input().split())
        
        if p > 8:
            continue
        
        if p in dikt:
            dikt[p] = max(dikt[p], s)
        else:
            dikt[p] = s
        
    print(sum(value for key, value in dikt.items()))

        