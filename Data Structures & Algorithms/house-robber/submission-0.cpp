class Solution {
public:
    int solve(int i,int n,vector<int>& nums,vector<int>& dp){
        if(i>n)return 0;
        if(dp[i]!=-1)return dp[i];
        int skip=0;
        if(i<=n-1) 
        skip=solve(i+1,n,nums,dp);
        int rob=nums[i]+solve(i+2,n,nums,dp);
        int ans = max(rob,skip);
        return dp[i]=ans;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return solve(0,n-1,nums,dp);
    }
};
