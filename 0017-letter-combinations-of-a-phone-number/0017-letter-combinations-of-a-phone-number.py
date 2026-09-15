class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        d={
            '2':"abc",'3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'
        }
        ans=[]

        def check(curr,idx):
            if idx==len(digits):
                ans.append(curr)
                return 
            for i in d[digits[idx]]:
                check(curr+i,idx+1)
        check("",0)
        return ans
            