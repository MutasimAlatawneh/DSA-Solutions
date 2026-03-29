class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        //putting the len of the string at the first of the string and followed by * ["Hello World"] "15*Hello World"
        for(int i=0;i<strs.size();i++){
            int sz=strs[i].size();
            string k=to_string(sz);
            s+=k;
            s+='*';
            s+=strs[i];
        }
        return s;
    }
    //2*xo4*oooo
    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<string>v;
        string sz="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                sz+=s[i];
                continue;
            }
            i++;
            int n=stoi(sz);
            string p="";
            for(int j=0;j<n;j++){
                p+=s[i+j];
            }
            i+=n-1;
            sz="";
            v.push_back(p);
        }
        return v;
    }
};
