class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=nums.size();
        x=x*(x+1)/2;
        for(int i=0;i<nums.size();i++){
            x-=nums[i];
        }
        return x;
    }
};
