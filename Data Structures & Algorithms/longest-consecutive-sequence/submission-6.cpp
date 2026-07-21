class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        unordered_set<int>s(nums.begin(),nums.end());
        int mn=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int c=1;
                int k=nums[i]+1;
                while(s.find(k)!=s.end()){
                    c++;
                    k++;
                }
                mn=max(mn,c);
            }
        }
        return mn;
    }
};
