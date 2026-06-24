class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0,max_s=0;
        string res;
        unordered_set<char>s1;
        for(int i=0;i<s.size();i++){
            while(s1.count(s[i])){
                s1.erase(s[j]);
                j++;
            }
            s1.insert(s[i]);
            max_s=max(max_s,i-j+1);
        }
        return max_s;
    }
};
