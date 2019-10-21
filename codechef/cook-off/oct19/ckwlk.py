for _ in range(int(input())):
    n = int(input())

    x = 0
    y = 0
    while n % 5 == 0:
        n //= 5
        x += 1
    while n % 2 == 0:
        n //= 2
        y += 1
    
    if n == 1 and y >= x and y <= 2 * x:
        print('Yes')
    else:
        print('No')
