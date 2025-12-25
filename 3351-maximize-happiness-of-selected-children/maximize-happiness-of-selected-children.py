class Solution:
    def maximumHappinessSum(self, happiness: List[int], k: int) -> int:
        happiness.sort()
        happiness.reverse()
        i = 0
        sum = 0
        while i < k and happiness[i] - i > 0:
            sum = sum + (happiness[i] - i)
            i += 1
        return sum