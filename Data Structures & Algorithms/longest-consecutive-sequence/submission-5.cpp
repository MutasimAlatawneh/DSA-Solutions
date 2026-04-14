class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        unordered_set<int>Set={nums.begin(),nums.end()};
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(Set.find(nums[i]-1)==Set.end()){
                int c=1;
                int k=nums[i]+1;
                while(Set.find(k)!=Set.end()){
                    c++;
                    k++;
                }
                ans=max(ans,c);
            }
        }
        return ans;
    }
};
