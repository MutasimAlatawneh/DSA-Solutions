class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto &it:mp){
            v.push_back(make_pair(it.second,it.first));
        }
        sort(v.begin(),v.end());
        for(int i=v.size()-1;i>=0&&k>0;i--,k--){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};
