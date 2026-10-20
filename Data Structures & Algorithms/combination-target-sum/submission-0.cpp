class Solution {
public:
    vector<vector<int>>combination;
    void sub(vector<int>&arr ,int i,int target,vector<int>&nums,int sum){
        if(i==nums.size()){
            if(sum==target)combination.push_back(arr);
            return;
        }
        if(sum==target){
            combination.push_back(arr);
            return;
        }
        else if(sum>target)return;

        arr.push_back(nums[i]);
        sub(arr,i,target,nums,sum+=nums[i]);
        arr.pop_back();
        sub(arr,i+1,target,nums,sum-=nums[i]);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>arr;
        sub(arr,0,target,nums,0);
        return combination;
    }
};
