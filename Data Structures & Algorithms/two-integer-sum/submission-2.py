class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i, n in enumerate(nums):
            d[n] = i
        for i, n1 in enumerate(nums):
            n2 = target-n1
            if d.get(n2):
                j=d[n2]
                if j!=i:
                    return sorted([i,j])
        return False
        