class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        for(int i=0;i<prices.size();i++){
            int buy=prices[i];
            for(int j=i+1;j<prices.size();j++){
                mx=max(mx,prices[j]-buy);
            }
        }  
        return mx;
    }
};
