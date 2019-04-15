class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        res_dict = dict()
        for index, res in enumerate(list1):
            res_dict[res] = index - 2005 
        
        min_index = 2005
        for index, res in enumerate(list2):
            if res in res_dict:
                res_dict[res] += index + 2005
                if res_dict[res] < min_index:
                    min_index = res_dict[res]

        ans = list()
        for key, value in res_dict.items():
            if value == min_index:
                ans.append(key)
        return ans
