class Solution {
public:
    int characterReplacement(string s, int k) {
        int arr[26]={0};
        int l=0;
        int ans=0;
        int mx=0;
        for(int r=0;r<s.size();r++){
            arr[s[r]-'A']++;
            mx=max(mx,arr[s[r]-'A']);
            while(r-l+1-mx>k){
                arr[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};
