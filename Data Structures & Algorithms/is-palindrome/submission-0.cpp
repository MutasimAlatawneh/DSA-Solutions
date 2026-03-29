class Solution {
public:
    bool isPalindrome(string s) {
        string newString="";
        for(auto &c:s){
            if((c>=48&&c<=57)||(c>=97&&c<=122)||(c>=65&&c<=90))
            newString+=tolower(c);
        }
        s=newString;
        reverse(s.begin(),s.end());
        if(s==newString)
        return true;
        else    
        return false;
    }
};
