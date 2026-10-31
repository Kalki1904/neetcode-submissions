class Solution {
public:
    vector<string>ans;
    void dfs(string temp,int n ,int open,int close){
        if(temp.length()==2*n){
            ans.push_back(temp);
            return;
        }
        if(open<n)dfs(temp+'(',n,open+1,close);
        if(close<open)dfs(temp+')',n,open,close+1);
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        dfs(temp,n,0,0);
        return ans;
    }
};
