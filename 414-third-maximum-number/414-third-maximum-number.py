class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = list(dict.fromkeys(nums))
        nums.sort()
        max = 0
        if len(nums) < 3:
            maximum = nums[-1]
        else:
            maximum = nums[-3]
        return maximum