class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        return set(i for i in range(1, len(nums) + 1)) - set(nums)