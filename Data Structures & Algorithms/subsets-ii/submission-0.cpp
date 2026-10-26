class Solution {
public:
    vector<vector<int>>ans;
    void dfs(vector<int>&nums,vector<int>&temp,int n){
        ans.push_back(temp);
        for(int i=n;i<nums.size();i++){
            if(i>n && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            dfs(nums,temp,i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        sort(nums.begin(),nums.end());
        dfs(nums,temp,0);
        return ans;
    }
};
