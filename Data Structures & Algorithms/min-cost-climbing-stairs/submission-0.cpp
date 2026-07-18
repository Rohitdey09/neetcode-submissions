class Solution {
public:
    int solve(int i,vector<int>& costs,vector<int>& dp) {
        if(i==0||i==1)return costs[i];
        if(dp[i]!=-1)return dp[i];
        int ans=costs[i]+min(solve(i-1,costs,dp),solve(i-2,costs,dp));
        return dp[i]=ans;
    }
    int minCostClimbingStairs(vector<int>& costs) {
        int n=costs.size();
        vector<int>dp(costs.size(),-1);
        return min(solve(n-1,costs,dp),solve(n-2,costs,dp));
    }
};
