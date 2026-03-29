class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long t=1;
        vector<int>pre(nums.size());
        pre[0]=nums[0];bool fl=true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==0&&fl){
                pre[i]=pre[i-1];
                fl=false;
                continue;
            }
            pre[i]=pre[i-1]*nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=pre[nums.size()-1];
                continue;
            }
            if(fl)
            nums[i]=pre[nums.size()-1]/nums[i];
            else 
            nums[i]=0;
        }
        return nums;
    }
};
