class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        l1=[]
        ch=0
        for num in nums:
            if num not in l1:
                l1.append(num)
                ch=1
            else:
                return True
                break
        if ch==1 or len(nums)==0:
            return False