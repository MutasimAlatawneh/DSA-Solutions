class Solution {
public:
    int countSeniors(vector<string>& details) {
        string s="",t;
        int ans=0;
        for(int i=0;i<details.size();i++){
            s="";
            t=details[i];
            s+=t[11];
            s+=t[12];
            int k=stoi(s);
            if(k>60)ans++;
        }
        return ans;
    }
};