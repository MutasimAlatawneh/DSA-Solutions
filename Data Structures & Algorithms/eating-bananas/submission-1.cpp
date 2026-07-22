class Solution {
public:
    bool doesItWork(vector<int>&p , int k, int h){
        long long sum=0;
        for(auto &it:p){
            sum+=ceil((double)it/k);
        }
        if(sum<=h)
        return true;
        else
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        
        sort(piles.begin(),piles.end());
        int l=1,r=piles[piles.size()-1];
        while(l<r){
            int mid=(l+r)/2;
            if(doesItWork(piles,mid,h))
            r=mid;
            else
            l=mid+1;
        }
        return r;
    }
};
