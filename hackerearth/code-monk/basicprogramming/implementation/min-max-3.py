n = input()
nums = list(map(int, input().split()))

flag = True
mini, maxi = min(nums), max(nums)
nums = set(nums)
for i in range(mini, maxi):
    if i not in nums:
        flag = False
        break

if flag:
    print('YES')
else:
    print('NO')
