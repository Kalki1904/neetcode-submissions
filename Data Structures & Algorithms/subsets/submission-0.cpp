class Solution {
public:vector<vector<int>>sub;
    void subset(vector<int>& nums,vector<int>& temp,int i){
        if(i>=nums.size()){
            sub.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        subset(nums,temp,i+1);
        temp.pop_back();
        subset(nums,temp,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        subset(nums,temp,0);
        return sub;
    }
};
