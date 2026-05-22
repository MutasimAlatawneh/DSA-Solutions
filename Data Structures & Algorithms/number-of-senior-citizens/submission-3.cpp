class Solution {
public:
    int countSeniors(vector<string>& details) {
        string s="",t;
        int ans=0;
        for(int i=0;i<details.size();i++){
            s=details[i];
            int k=(s[11]-'0')*10+(s[12]-'0');
            if(k>60)ans++;
        }
        
        return ans;
    }
};