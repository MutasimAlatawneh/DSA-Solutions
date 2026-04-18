class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        for(auto &a:nums)
        ans.push_back(a);
        for(auto &a:nums)
        ans.push_back(a);
        return ans;
    }
};