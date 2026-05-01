class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        string ans="";
        string x;
        for(int j=0;j<a.size();j++){
            bool fl=true;
        for(int i=1;i<strs.size();i++){
            x=strs[i];
            if(a[j]!=x[j]){
                fl=false;
            }
        }
        if(!fl)break;
        else ans+=a[j];
        }
        return ans;
    }
};