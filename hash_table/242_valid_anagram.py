class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        letters_length = 26
        words_s = [0 for i in range(letters_length)]
        words_t = [0 for i in range(letters_length)]
        for l in s:
            words_s[ord(l) - 97] += 1
        for l in t:
            words_t[ord(l) - 97] += 1
        
        for i in range(letters_length):
            if(words_s[i] != words_t[i]):
                return False
        return True

            
