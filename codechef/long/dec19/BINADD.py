for _ in range(int(input())):
    a = input()
    b = input()

    if int(b) == 0:
        print(0)
    elif int(a) == 0:
        print(1)
    else:
        max_len = max(len(a), len(b))
        a = a.rjust(max_len, '0')
        b = b.rjust(max_len, '0')

        count = []
        i = max_len - 1
        while i >= 0:
            run_count = 0
            if a[i] == '1' and b[i] == '1':
                i -= 1
                while i >= 0 and a[i] != b[i]:
                    run_count += 1
                    i -= 1
                count.append(run_count)
            else:
                i -= 1

        if count:
            print(max(count) + 2)
        else:
            print(1)
