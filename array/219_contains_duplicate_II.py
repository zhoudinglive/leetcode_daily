class Solution:
    def containsNearbyDuplicate(self, nums: 'List[int]', k: 'int') -> 'bool':
        nums_dict = dict()
        ans = len(nums) + 1
        changed = False
        for index, num in enumerate(nums):
            if nums_dict.get(num) is None:
                nums_dict[num] = index
            else:
                last_index = nums_dict[num]
                ans = min(ans, index - last_index)
                nums_dict[num] = index
                changed = True
        
        if ans <= k and changed:
            return True
        else:
            return False