for _ in range(int(input())) :
    n, a, b, k = list(map(int, input().split()))
    acount = n // a
    bcount = n // b
    bothcount = n // (a * b)
    #print(acount, bcount, bothcount)
    tot = acount + bcount - (2 * bothcount)
    if a % b == 0 or b % a == 0 :
        if abs(acount - bcount) >= k :
            print('Win')
        else :
            print('Lose')
    else :
        if tot >= k :
            print('Win')
        else :
            print('Lose')