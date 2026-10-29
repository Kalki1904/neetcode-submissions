class Solution {
public:
    vector<vector<int>>arr;
    void dfs(vector<int>&nums,vector<int>&temp,vector<bool>&pick){
        if(temp.size()==nums.size()){
            arr.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!pick[i]){
                temp.push_back(nums[i]);
                pick[i]=true;
                dfs(nums,temp,pick);
                temp.pop_back();
                pick[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>temp;
        vector<bool>pick(nums.size(),false);
        dfs(nums,temp,pick);
        return arr;
    }
};
