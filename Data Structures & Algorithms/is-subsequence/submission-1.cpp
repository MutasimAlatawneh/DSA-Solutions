class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ss="";
        int j=0;
        for(int i=0;i<t.size();i++){
            if(s[j]==t[i])
            ss+=s[j++];
        }
        if(ss==s)return true;
        else return false;
    }
};