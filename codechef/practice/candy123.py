for _ in range(int(input())) :
    x = input().split()
    x = [int(i) for i in x]
    lim, bob = x
    i = 1
    trigger = 0
    flag = 1
    winner = ['Limak', 'Bob']
    while True :
        if trigger == 0 :
            if i <= lim:
                lim -= i
                trigger = 1
            else :
                flag = 1
                break
        elif trigger == 1 :
            if i <= bob :
                bob -= i
                trigger = 0
            else :
                flag = 0
                break
        i += 1
    print(winner[flag])
            
