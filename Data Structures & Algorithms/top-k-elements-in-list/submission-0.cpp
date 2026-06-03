class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>res;
        vector<int>ans;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            res.push_back({it.second,it.first});
        }
        sort(res.rbegin(),res.rend());
        for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
        }
        return ans;

    }
};
