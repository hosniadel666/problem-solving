# @param {Integer[]} nums
# @return {Integer[]}
def find_disappeared_numbers(nums)
    n = nums.length
    array_2 = *1..n
    return array_2 - nums
end