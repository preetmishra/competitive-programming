for _ in range(int(input())) :
    x = input().split()
    x = [int(i) for i in x]
    alice, bob, times = x
    if times % 2 != 0 :
        alice *= 2
    l = [alice, bob]
    print(max(l)//min(l))
    