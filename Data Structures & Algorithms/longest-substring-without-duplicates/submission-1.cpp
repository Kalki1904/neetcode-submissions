class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int n=s.length();
        if(n==0)return 0;
        int maxLength=0;
        int currLength=0;
        vector<int>freq(256,0);
        while(r<n){
            if(freq[(int)s[r]]==0){
                freq[(int)s[r]]=1;
                r++;
                currLength++;
            }
            else{
                freq[(int)s[l]]=0;
                l++;
                currLength--;
            }
            maxLength=max(maxLength,currLength);
            
        }
        return maxLength;
    }
};