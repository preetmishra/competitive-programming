def is_prime(n):
    if n % 2 == 0 and n != 2:
        return False

    i = 3

    while i * i <= n:
        if n % i == 0:
            return False

        i += 2

    return True


limit = int(input())

for num in range(2, limit + 1):
    if is_prime(num):
        print(num, end=' ')
