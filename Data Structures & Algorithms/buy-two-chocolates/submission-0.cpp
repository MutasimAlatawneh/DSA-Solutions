class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        if(money-prices[0]<=0){
            return money;
        }
        else{
            money-=prices[0];
            if(money-prices[1]<0){
                return money+prices[0];
            }
            else{
                money-=prices[1];
                return (money);
            }
        }
    }
};