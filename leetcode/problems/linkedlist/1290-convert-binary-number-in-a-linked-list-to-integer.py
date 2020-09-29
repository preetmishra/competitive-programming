# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        temp = head
        binary = str(temp.val)
        while temp.next is not None:
            temp = temp.next
            binary += str(temp.val)
        return int(binary, 2)
