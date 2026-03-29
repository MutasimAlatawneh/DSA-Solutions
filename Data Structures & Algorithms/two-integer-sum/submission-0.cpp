class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    vector<int>v(2);
                    v[0]=i;
                    v[1]=j;
                    return v;
                }
            }
        }
    }
};
