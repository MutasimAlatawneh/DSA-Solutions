class Solution {
public:
    void reverseString(vector<char>& s) {
        char a=s[0];
        for(int i=0;i<s.size()/2;i++){
            a=s[i];
            s[i]=s[s.size()-i-1];
            s[s.size()-i-1]=a;
        }
        
    }
};