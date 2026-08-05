class Solution:
    def subsets(self, a: List[int]) -> List[List[int]]:
        l = []
        n = len(a)
        for i in range(1 << n):
            p = []
            for j in range(n):
                if (i & (1 << j)) > 0:
                    p.append(a[j])
            l.append(p)
        return l

        