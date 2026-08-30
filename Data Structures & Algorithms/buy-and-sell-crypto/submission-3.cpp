class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i =0;
        int j = 1;
        int startPrice=prices[i];
        int closePrice=prices[j];
        int cost=INT_MIN;
        while(j!=prices.size()){
            if(prices[i]<prices[j])cost=max(cost,prices[j]-prices[i]);
            else {
                i=j;
            }
            j++;
        }
        if(cost==INT_MIN)return 0;
        return cost;
        
    }
};
