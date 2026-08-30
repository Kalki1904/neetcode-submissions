bool cmp(pair<int, int>& a, 
        pair<int, int>& b) 
    { 
        return a.second > b.second; 
    }
class Solution {
    
public:
     
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>seen;
        vector<int>sol;
        for(int i=0;i<nums.size();i++){
            int s= seen.count(nums[i]);
            if(s==0)seen[nums[i]]=1;
            else seen[nums[i]]+=1;
        }
        vector<pair<int,int>>sot;
        for(auto it:seen){
            sot.push_back(it);
        }
        sort(sot.begin(),sot.end(),cmp);

        int i=0;
        vector<pair<int,int>>::iterator it = sot.begin();
        while(i<k){
            sol.push_back(it->first);
            it++;
            i++;
        }

        return sol;

    }
};
