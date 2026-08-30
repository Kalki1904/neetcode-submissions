class Solution {
public:
    bool foundchar(string& found,char c){
        for(char n : found)if(n==c)return true;
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.length();
        if(n==0)return 0;
        int maxLength=0;
        string foundstr;
        while(r<n){
            if(!foundchar(foundstr,s[r])){
                foundstr+=s[r];
                r++;
            }
            else{
                foundstr.erase(0,1);
                l++;
            }
            maxLength=max(maxLength,(int)foundstr.size());
        }
        return maxLength;
    }
};
