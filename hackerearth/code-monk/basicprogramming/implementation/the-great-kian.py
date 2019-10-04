n = int(input())
nums = list(map(int, input().split()))

ans1 = sum(nums[i] for i in range(0, n, 3))
ans2 = sum(nums[i] for i in range(1, n, 3))
ans3 = sum(nums[i] for i in range(2, n, 3))

print(ans1, ans2, ans3)
