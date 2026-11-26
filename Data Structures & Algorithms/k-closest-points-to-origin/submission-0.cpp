class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>>heap;
        for(auto &point:points){
            int distance = point[0]*point[0]+point[1]*point[1];
            heap.push({distance,point});
            if(heap.size()>k)heap.pop();
        }
        vector<vector<int>>result;
        while(!heap.empty()){
            result.push_back(heap.top().second);
            heap.pop();
        }
        return result;

    }
};
