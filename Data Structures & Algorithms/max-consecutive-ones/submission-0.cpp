class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int it=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
            it++;
            else
            {
                mx=max(mx,it);
                it=0;
            }
        }
        mx=max(mx,it);
        return mx;
    }
};