class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        //int ans=stoi(tokens[0]);
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="/"&&tokens[i]!="*"){
                int k=stoi(tokens[i]);
                st.push(k);
            }
            else{
                int k= (st.top());
                st.pop();
                int k2= (st.top());
                st.pop();
                int ans;
                if(tokens[i]=="+"){
                    ans=k+k2;
                }
                else if(tokens[i]=="-"){
                    ans=k2-k;
                }
                else if(tokens[i]=="*"){
                    ans=k2*k;
                }
                else if(tokens[i]=="/"){
                    ans=k2/k;
                }
                st.push(ans);
                
            }
        }

        return st.top();
    }
};
