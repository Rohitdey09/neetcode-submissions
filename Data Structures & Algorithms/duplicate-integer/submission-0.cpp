class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>st;
        for(auto it:nums){
            if(st.count(it))return true;
            st.insert(it);
            
        }
        return false;
    }
};