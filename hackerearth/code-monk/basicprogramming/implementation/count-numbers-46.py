for _ in range(int(input())):
    n = int(input())
    s = input()

    digits = set(str(i) for i in range(10))
    saw_a_num = False
    count = 0

    for i in range(n):
        if s[i] in digits:
            saw_a_num = True
        else:
            if saw_a_num:
                count += 1
                saw_a_num = False
    
    if saw_a_num:
        count += 1

    print(count)
