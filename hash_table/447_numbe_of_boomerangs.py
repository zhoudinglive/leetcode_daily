class Solution:
    def numberOfBoomerangs(self, points: List[List[int]]) -> int:
        pl = len(points)

        ans = 0
        for i in range(pl):
            dis_dict = dict()
            for j in range(pl):
                d = (points[j][0] - points[i][0]) ** 2 + (points[j][1] - points[i][1]) ** 2
                if dis_dict.get(d) is None:
                    dis_dict[d] = 1
                else:
                    dis_dict[d] += 1
            for key, value in dis_dict.items():
                ans += value * (value - 1)
        return ans

