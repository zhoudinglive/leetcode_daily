class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        s_dict = dict()
        for l in s:
            if s_dict.get(l) is not None:
                s_dict[l] += 1
            else:
                s_dict[l] = 1
        for l in t:
            if s_dict.get(l) is not None:
                s_dict[l] -= 1
            else:
                return l
        for key, value in s_dict.items():
            if value < 0:
                return key
        

