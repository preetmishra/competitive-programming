def convert_to_min(h, m):
    return (h * 60) + m


def convert_to_hhmm(m):
    return ((m // 60), (m % 60))


for _ in range(int(input())):
    h1, m1, h2, m2 = list(map(int, input().split()))

    diff = abs(convert_to_min(h1, m1) - convert_to_min(h2, m2))
    converted_diff = convert_to_hhmm(diff)

    print(converted_diff[0], converted_diff[1])
