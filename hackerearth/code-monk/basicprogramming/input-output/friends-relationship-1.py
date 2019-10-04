def print_pattern(arr):
    for ch in arr:
        print(ch, end = '')
    
    print()

for _ in range(int(input())):
    n = int(input())

    pattern = ['#'] * (2 * n)

    for i in range(n):
        pattern[i] = pattern[(2 * n) - i - 1] = '*'
        
        print_pattern(pattern)

    print()