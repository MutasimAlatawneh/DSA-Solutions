class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>integerCount;
        for(int i=0;i<nums.size();i++){
            if(integerCount.find(target-nums[i])!=integerCount.end()){
                return {integerCount[target-nums[i]],i};
            }
            else{
                integerCount[nums[i]]=i;
            }
        }
        return {};
    }
};
