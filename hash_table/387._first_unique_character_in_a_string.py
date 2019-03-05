class Solution:
    def firstUniqChar(self, s: str) -> int:
        hash_letters = [0 for i in range(26)]
        for l in s:
            hash_letters[ord(l) - 97] += 1
        
        for index, l in enumerate(s):
            if hash_letters[ord(l) - 97] == 1:
                return index
        return -1