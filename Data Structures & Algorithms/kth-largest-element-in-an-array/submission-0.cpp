class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>heap;
        for(auto &num:nums)heap.push(num);
        while(!heap.empty()){
            k--;
            if(k==0)break;
            heap.pop();
        }
        return heap.top();

    }
};
