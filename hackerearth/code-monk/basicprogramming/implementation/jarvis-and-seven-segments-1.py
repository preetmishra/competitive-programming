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
    n = int(input())
    nums = list(input().split())

    minimum = 1000000
    fav = nums[0]
    for i in nums:
        req_energy = sum(dikt[int(j)] for j in i)
        if req_energy < minimum:
            minimum = req_energy
            fav = i

    print(fav)
