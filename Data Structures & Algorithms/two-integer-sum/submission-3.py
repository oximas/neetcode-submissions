class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, n1 in enumerate(nums):
            n2 = target-n1
            if n2 in d:
                j=d[n2]
                return [j,i]
            d[n1] = i
        return False
        