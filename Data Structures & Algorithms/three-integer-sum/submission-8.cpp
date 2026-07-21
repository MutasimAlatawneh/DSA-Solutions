class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //-4 -1 -1 0 1 2
        set<int>s;
        sort(nums.begin(), nums.end());  
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
            continue;
            s.insert(nums[i]);
            int l=i+1,r=nums.size()-1;
            while(l<r){
                if(nums[l]+nums[r]+nums[i]<0)
                l++;
                else if(nums[l]+nums[r]+nums[i]>0)
                r--;
                else
                {
                    v.push_back({nums[i],nums[l],nums[r]});
                     l++;
                     r--;
                    while(l < r && nums[l] == nums[l-1])
                        l++;

                    while(l < r && nums[r] == nums[r+1])
                        r--;

                }  
            }
        }

        return v;
    }
};
