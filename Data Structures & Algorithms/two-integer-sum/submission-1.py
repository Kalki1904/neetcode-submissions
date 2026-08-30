class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ls=[]
        for i in range(len(nums)):
            for j in range(len(nums)):
                if i==j :
                    continue
                else:
                    if nums[i]+nums[j]==target:
                        ls.append(i)
                        ls.append(j)
                        return ls
                        break