for _ in range(int(input())):
    s = input().lower()

    vowels = set('aeiou')
    ans = 0
    for i in range(len(s)):
        if s[i] in vowels:
            ans += (len(s) - i) * (i + 1)

    print(ans)