class Solution:
    def dailyTemperatures(self, T: List[int]) -> List[int]:
        n, right_max = len(T), float('-inf')
        ans = [0] * n
        for i in range(n - 1, -1, -1):
            t = T[i]
            if right_max <= t:
                right_max = t
            else:
                pos = 1
                while T[i] >= T[i + pos]:
                    pos += ans[i + pos]
                ans[i] = pos
        return ans 