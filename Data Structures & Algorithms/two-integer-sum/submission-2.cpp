class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>Map;
        for(int i=0;i<nums.size();i++){
            Map[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            if(Map.count(target-nums[i])!=0&&i!=Map[target-nums[i]]){
                return {i,Map[target-nums[i]]};
            }
        }
    }
};
