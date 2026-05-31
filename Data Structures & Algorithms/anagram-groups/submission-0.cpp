class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,vector<string>>mp;
        for(auto s:strs){
            string s1=s;
            sort(s1.begin(),s1.end());
            mp[s1].push_back(s);
        }
        for(auto it:mp){
            res.push_back(it.second);
        }
        return res;
    }
};
