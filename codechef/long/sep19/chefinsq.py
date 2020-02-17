import math

def nCr(n, r):
    f = math.factorial

    return (f(n) // ((f(r) * f(n-r))))    

for _ in range(int(input())):
    n, k = list(map(int, input().split()))
    nums = list(map(int, input().split()))

    min_arr =  []
    copy_nums = nums[:]

    for i in range(k):
        cur_min = min(copy_nums)
        min_arr.append(cur_min)
        copy_nums.remove(cur_min)

    max_min_arr = max(min_arr)
    min_arr_dikt = {}

    for i in min_arr:
        if i not in min_arr_dikt:
            min_arr_dikt[i] = nums.count(i)

    remaining_k = k - sum(count for val, count in min_arr_dikt.items() if val != max_min_arr)

    print(nCr(nums.count(max_min_arr), remaining_k))
