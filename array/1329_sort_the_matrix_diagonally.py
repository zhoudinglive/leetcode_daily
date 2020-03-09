# Given a m * n matrix mat of integers, sort it diagonally in ascending order from the top-left to the bottom-right then return the sorted array.
from collections import defaultdict

class Solution:
    def diagonalSort(self, mat: List[List[int]]) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        diags = defaultdict(list)

        for row in range(m):
            for col in range(n):
                diags[col-row].append(mat[row][col])
        
        for idx in diags:
            diags[idx].sort(reverse=1)

        for row in range(m):
            for col in range(n):
                mat[row][col] = diags[col-row].pop()
        
        return mat
