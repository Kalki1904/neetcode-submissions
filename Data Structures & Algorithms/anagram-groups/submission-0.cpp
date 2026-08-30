class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, bool> done;  // keeps track of sorted forms already grouped

        for (int i = 0; i < strs.size(); i++) {
            string sorted_i = strs[i];
            sort(sorted_i.begin(), sorted_i.end());

            // Skip if this pattern already processed
            if (done[sorted_i]) continue;

            vector<string> temp;
            temp.push_back(strs[i]); // include itself

            for (int j = i + 1; j < strs.size(); j++) {
                string sorted_j = strs[j];
                sort(sorted_j.begin(), sorted_j.end());

                if (sorted_i == sorted_j) {
                    temp.push_back(strs[j]);
                }
            }

            ans.push_back(temp);
            done[sorted_i] = true;
        }

        return ans;
    }
};