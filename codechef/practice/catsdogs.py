for _ in range(int(input())) :
    x = input().split()
    x = [int(i) for i in x]
    cats, dogs, legs = x
    y = "yes"
    n = "no"
    if legs % 4 == 0 and legs >= dogs * 4 :
        legs -= dogs * 4
        if legs == 0 and cats <= 2 * dogs :
            print(y)
            continue
        if legs == cats * 4 :
            print(y)
            continue
        elif legs > cats * 4 :
            print(n)
            continue
        else :
            cats -= legs // 4
            if cats == 0 :
                print(y)
                continue
            elif cats <= 2 * dogs :
                print(y)
                continue
            else :
                print(n)
                continue
    else :
        print(n) 