class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mpp;

        for(int i = 0;i<strs.size();i++){
            string t = strs[i];
            sort(t.begin(),t.end());
            mpp[t].push_back(strs[i]);
        }

        for(auto it : mpp){
            ans.push_back(it.second);
        }

        return ans;

    }
};
