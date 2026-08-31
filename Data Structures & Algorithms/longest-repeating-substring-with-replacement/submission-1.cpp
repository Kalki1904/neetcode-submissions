class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;
        int r=0;
        int n=s.length();
        int maxLength=0;
        int freqChar;
        unordered_map<int,int>freq;
        while(r<n){
            freq[s[r]]++;
            freqChar=max(freqChar,freq[s[r]]);
            while((r-l+1)-freqChar > k){
                freq[s[l]]--;
                l++;
            }
            maxLength=max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
    }
};
