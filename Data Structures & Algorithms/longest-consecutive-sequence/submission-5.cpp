class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int cnt,max_n=0,curr;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                curr=nums[i];
                cnt=1;
            while(s.count(curr+1)){
                cnt++;
                curr++;
            }
            max_n=max(max_n,cnt);
            }
        }
        return max_n;
    }
};
