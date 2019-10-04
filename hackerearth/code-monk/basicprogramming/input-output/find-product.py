n = int(input())
nums = list(map(int, input().split()))

modulo = 1000000007
prod = 1

for num in nums:
    prod = (prod * num) % modulo

print(prod)
