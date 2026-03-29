class Solution {
public:
    bool isValidChar(char a){
        if(a>='A'&&a<='Z')
        return true;
        if(a>='a'&&a<='z')
        return true;
        if(a>='0'&&a<='9')
        return true;
        return false;
    }
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            while(!isValidChar(s[l])&&l<r)
            l++;
            while(!isValidChar(s[r])&&r>l)
            r--;
            if(tolower(s[l])!=tolower(s[r]))
            return false;
            l++;r--;
        }
        return true;
    }
};
