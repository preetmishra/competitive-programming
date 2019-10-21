t = int(input())
for _ in range(t) :
    x = input().split()
    x = [int(i) for i in x]
    x, y, z = x
    l = input().split()
    l = [int(i) for i in l]
    both = bob = alice = 0
    for i in l :
        if i % y == 0 and i % z == 0 :
            both += 1
        elif i % y == 0 :
            bob += 1
        elif i % z == 0 :
            alice += 1
    if both >= 1 :
        bob += 1
    if bob > alice :
        print("BOB")
    else :
        print("ALICE")
