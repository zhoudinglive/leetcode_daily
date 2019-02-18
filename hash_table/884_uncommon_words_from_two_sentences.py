class Solution:
    def uncommonFromSentences(self, A: 'str', B: 'str') -> 'List[str]':
        words = A.split(' ') + B.split(' ')

        ans = dict()
        for word in words:
            if word in ans:
                ans[word] += 1
            else:
                ans[word] = 1
        
        return [key for key, value in ans.items() if value == 1]
        

        
