n, k = list(map(int, input().split()))
arr = list(map(int, input().split()))

flag = True
j = 0
for i in range(n):
    if arr[i] <= 0:
        continue
    
    while True:
        if arr[i] == 0:
            break

        while arr[j] >= 0 and j < n:
            j += 1
        if j == n:
            flag = False
            break
        if j - i > k:
            break

        if arr[i] >= abs(arr[j]):
            arr[i] -= abs(arr[j])
            arr[j] = 0
        else:
            arr[j] += arr[i]
            arr[i] = 0

    if not flag:
        break
    
print(sum(abs(num) for num in arr))
