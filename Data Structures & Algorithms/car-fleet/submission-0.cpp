class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        stack<double>st;
        bool fl=true;
        for(auto &p:v){
            st.push(((double)target-p.first)/p.second);
            if(st.size()>=2){
                double a=st.top();
                st.pop();
                double b=st.top();
                if(a>b)
                st.push(a);
            }
           

        }

        return st.size();
    }
};
