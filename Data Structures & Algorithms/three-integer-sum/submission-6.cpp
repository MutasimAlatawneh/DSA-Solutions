class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //-4 -1 -1 0 1 2
        set<int>s;
        vector<vector<int>>v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end())
            continue;
            s.insert(nums[i]);
            int l=i+1,r=nums.size()-1;
            int sum=0; 
            
            while(l<r){
                sum=nums[l]+nums[r]+nums[i];
                if(sum==0){
                    v.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l]==nums[l-1])
                        l++;
                    while(nums[r]==nums[r+1])
                        r--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    r--;
                }
                
                
            }
        }
        return v;
    }
};
