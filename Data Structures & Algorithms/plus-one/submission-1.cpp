class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long k=0;
        for(int i=0;i<digits.size();i++){
            k+=digits[i];
            k*=10;
        }
        k=k/10;
        k++;
        vector<int>v;
        while(k>0){
            v.push_back(k%10);
            k=k/10;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
