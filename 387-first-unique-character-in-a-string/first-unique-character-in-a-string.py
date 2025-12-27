class Solution:
    def firstUniqChar(self, s: str) -> int:
        table = {}
        for i in range(len(s)):
            if s[i] not in table:
                table[s[i]] = 1
            else:
                table[s[i]] += 1
        flag = -1
        for key, value in table.items():
            if value == 1:
                flag = key
                break
        if flag != -1:
            for i in range(len(s)):
                if flag == s[i]:
                    return i
        return -1


        