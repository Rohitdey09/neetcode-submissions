class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(auto it:strs){
            res+=to_string(it.size())+"#"+it;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>res;
        string num;
        int i=0,len=0;
        while(i<s.size()){
            if(isdigit(s[i])){
                num="";
                while(isdigit(s[i])){
                num+=s[i];
                i++;
                }
            }
            len=stoi(num);
            i++;
            res.push_back(s.substr(i,len));
            i+=len;
        }
    return res;
    }
};
