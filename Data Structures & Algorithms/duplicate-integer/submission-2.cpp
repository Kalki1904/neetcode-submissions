class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>seen;
        for(int i=0;i<nums.size();i++){
            auto it = seen.find(nums[i]);
            if(it!=seen.end()){
                return true;
            }
            else{
                seen[nums[i]]=i;
            }
        }
        return false;
    }

};
