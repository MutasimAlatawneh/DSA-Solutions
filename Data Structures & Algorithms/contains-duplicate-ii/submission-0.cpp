class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j&&nums[i] == nums[j]&&abs(i - j) <= k)
                return true;
            }
        }
        return false;
    }
};