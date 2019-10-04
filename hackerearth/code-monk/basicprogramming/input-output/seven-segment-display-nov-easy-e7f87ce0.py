dikt = {
    0: 6,
    1: 2,
    2: 5,
    3: 5,
    4: 4,
    5: 5,
    6: 6,
    7: 3,
    8: 7,
    9: 6,
}

for _ in range(int(input())):
    num = input()
    num = sum(dikt[int(i)] for i in num)

    if num % 2 == 0:
        ans = '1' * (num // 2)
    else:
        ans = '7' + ('1' * ((num - 3) // 2))

    print(int(ans))