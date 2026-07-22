class Solution {
private:
    int bitcount(int n){
        int cnt=0;
        while(n!=0){
            cnt++;
            n=(n&(n-1));
        }
        return cnt;
}
public:
    vector<int> countBits(int n) {
        vector<int>res;
        res.push_back(0);
        for(int i=1;i<=n;i++){
            int ans=bitcount(i);
            res.push_back(ans);
        }
        return res;
    }
};
