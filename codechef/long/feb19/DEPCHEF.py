for _ in range(int(input())) :
    n = int(input())
    attack = list(map(int, input().split()))
    defense = list(map(int, input().split()))
    shield = []
    for i in range(n) :

        try :
            totatt = attack[i - 1] + attack[i + 1]
        except :
            if i + 1 == n :
                totatt = attack[i - 1] + attack[0]

            elif i - 1 == 0 :
                totatt = attack[-1] + attack[i + 1]
        if totatt < defense[i] :
            shield.append(defense[i])
    if not shield :
        print('-1')
    else :
        print(max(shield))