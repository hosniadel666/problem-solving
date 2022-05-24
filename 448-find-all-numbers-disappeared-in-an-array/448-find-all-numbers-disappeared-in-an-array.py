class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        s = []
        s = [i for i in range(1, len(nums) + 1)]
        out = set(s) - set(nums)
        return out