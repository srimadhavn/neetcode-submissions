class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        
        // for rows
        
        for(int i = 0; i< rows; i++){
        unordered_set<char> sett;
            for(int j=0; j<cols; j++){
                if (board[i][j] == '.') continue;
                if (sett.count(board[i][j])) return false;
                sett.insert(board[i][j]);
            }
        }
        for(int i = 0; i< cols; i++){
        unordered_set<char> sett;
            for(int j=0; j<rows; j++){
                if (board[j][i] == '.') continue;
                if (sett.count(board[j][i])) return false;
                sett.insert(board[j][i]);
            }
        }
        for(int r = 0; r< 9; r+=3){
            for(int c=0; c<9; c+=3){
                unordered_set<char> sett;
                for(int i = r; i< r+3; i++){
                    for(int j = c; j < c +3; j++){
                        if (board[i][j] == '.') continue;
                if (sett.count(board[i][j])) return false;
                sett.insert(board[i][j]);
                    }

                }
                
            }
        }
        return true;
    }
};
