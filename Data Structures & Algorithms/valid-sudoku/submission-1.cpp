class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char>s;
        for(int i=0;i<9;i++){
            s.clear();
           for(int j=0;j<9;j++){
            if(s.find(board[i][j])!=s.end()&&board[i][j]!='.')
            return false;
            else
            s.insert(board[i][j]);
           }
        }
        for(int i=0;i<9;i++){
            s.clear();
           for(int j=0;j<9;j++){
            if(s.find(board[j][i])!=s.end()&&board[j][i]!='.')
            return false;
            else
            s.insert(board[j][i]);
           }
        }
        vector<pair<int,int>>arr={{0,0},{0,3},{0,6},{3,0},{3,3},{3,6},{6,0},{6,3},{6,6}};
        for(auto &[a,b]:arr){
            s.clear();
            for(int i=a;i<a+3;i++){
                for(int j=b;j<b+3;j++){
                    if(s.find(board[i][j])!=s.end()&&board[i][j]!='.')
                    return false;
                    else
                    s.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
