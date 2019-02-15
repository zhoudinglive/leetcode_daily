class Solution:
    def numJewelsInStones(self, J: 'str', S: 'str') -> 'int':
      sum = 0
      for cj in J:
        for cs in S:
          if(cs == cj):
            sum += 1
      return sum