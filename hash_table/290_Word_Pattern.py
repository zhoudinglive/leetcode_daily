class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        words = str.split(' ')

        if len(words) != len(pattern):
            return False
        else:
            words_dict = dict()
            for i in range(len(pattern)):
                char = pattern[i]
                word = words[i]

                if char not in words_dict:
                    words_dict[char] = set()
                words_dict[char].add(word)
            
            for k, v in words_dict.items():
                if len(v) > 1 or len(v) == 0:
                    return False
            
            for k1, v1 in words_dict.items():
                for k2, v2 in words_dict.items():
                    if k1 == k2:
                        continue
                    else:
                        if len(v1 & v2) == 1:
                            return False
            return True