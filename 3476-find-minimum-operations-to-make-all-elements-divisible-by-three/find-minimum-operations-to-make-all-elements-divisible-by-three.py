class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        con = 0
        for i in range(len(nums)):
            if nums[i]%3 != 0:
                con += 1
        return con