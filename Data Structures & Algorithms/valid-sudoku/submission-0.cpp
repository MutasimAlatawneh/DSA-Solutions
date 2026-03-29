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
        //squares
        for(int i=0;i<9;i+=3){
            s.clear();
            for(int j=i;j<3;j++){
                for(int k=0;k<3;k++){
                    if(s.find(board[j][k])!=s.end()&&board[j][k]!='.')
                    return false;
                    else
                    s.insert(board[j][k]);
                }
            }
            s.clear();
            for(int j=i;j<i+3;j++){
                for(int k=3;k<6;k++){
                    if(s.find(board[j][k])!=s.end()&&board[j][k]!='.')
                    return false;
                    else
                    s.insert(board[j][k]);
                }
            }
            s.clear();
            for(int j=i;j<i+3;j++){
                for(int k=6;k<9;k++){
                    if(s.find(board[j][k])!=s.end()&&board[j][k]!='.')
                    return false;
                    else
                    s.insert(board[j][k]);
                }
            }
        }
        return true;
    }
};
