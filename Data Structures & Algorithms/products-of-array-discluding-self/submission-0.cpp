class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n_size = nums.size();
        vector<int>prefix,suffix(n_size),res(n_size);
        int pre=1,suf=1,n=n_size-1;
        
        for(int i=0;i<nums.size();i++){
            prefix.push_back(pre);
            pre*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            suffix[n-i]=suf;
            suf*=nums[n-i];
        }
        for(int i=0;i<=n;i++){
            res[i]=prefix[i]*suffix[i];
        }
        return res;
    }
};
