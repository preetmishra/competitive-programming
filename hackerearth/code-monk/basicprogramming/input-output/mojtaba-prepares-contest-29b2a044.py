for _ in range(int(input())):
    cost_one, cost_two = list(map(int, input().split()))
    occur_one, occur_two = 0, 0

    for __ in range(int(input())):
        status_one, status_two = list(map(int, input().split()))

        occur_one += status_one
        occur_two += status_two

    if occur_two > occur_one:
        occur_one, occur_two = occur_two, occur_one

    if cost_two > cost_one:
        cost_one, cost_two = cost_two, cost_one

    print((cost_one * occur_two) + (cost_two * occur_one))
        