def find_index(max_three, target):
    if target in max_three:
        return -1

    for index, value in enumerate(max_three):
        if target > value:
            return index
    else:
        return -1


def shift_and_update(max_three, index, target):
    if index == 0:
        max_three[2] = max_three[1]
        max_three[1] = max_three[0]
        max_three[0] = target
    elif index == 1:
        max_three[2] = max_three[1]
        max_three[1] = target
    elif index == 2:
        max_three[2] = target


class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        max_three = [float('-inf')] * 3

        for num in nums:
            index = find_index(max_three, num)
            if index != -1:
                shift_and_update(max_three, index, num)

        if float('-inf') in max_three:
            return max(max_three)
        else:
            return max_three[-1]
