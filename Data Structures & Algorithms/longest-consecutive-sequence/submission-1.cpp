class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        set<int>s;
        for(auto &i:nums){
            s.insert(i);
        }
        int ans=1;
        int mx=1;
        for(auto i=++s.begin();i!=s.end();i++){
            auto pre=i;
            --pre;
            if(*i==(*(pre)+1)){
            mx++;
            continue;
            }
            else{
                ans=max(mx,ans);
                mx=1;
            }
        }  
        ans=max(mx,ans);
        return ans;
    }
};
