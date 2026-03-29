class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int cur=num;
                int streak=1;
                while(s.find(cur+1)!=s.end()){
                    streak++;
                    cur++;
                }
                ans=max(streak,ans);
            }
        }
        return ans;
    }
};
