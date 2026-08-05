class Solution:
    def subsetsWithDup(self, a: List[int]) -> List[List[int]]:
        ans = []
        a.sort()
        n = len(a)
        for i in range(1 << n):
            p = []
            for j in range(n):
                if (i & (1 << j)) > 0:
                    p.append(a[j])
            if p not in ans:
                ans.append(p)
        return ans
        