class Solution:
    def bestClosingTime(self, customers: str) -> int:
        precum = [0] * len(customers)
        n = 0
        for i in range(len(customers)):
            if customers[i] == 'Y':
                if i == 0:
                    precum[0] = 1
                else:
                    precum[i] = precum[i - 1] + 1
            else:
                precum[i] = precum[i - 1] - 1
        max, ans = 0, 0
        

        for i in range(len(precum)):
            if precum[i] > max:
                max = precum[i]
                ans = i
        if max <= 0:
            return 0
        return ans + 1
