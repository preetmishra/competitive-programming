n, mini, maxi = list(map(int, input().split()))
nums = list(map(int, input().split()))

flag = True
all_nums = set([i for i in range(mini, maxi + 1)])
for i in nums:
    if i not in all_nums:
        flag = False
        break

if flag:
    print('YES')
else:
    print('NO')
