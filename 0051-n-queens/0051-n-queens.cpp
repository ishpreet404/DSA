class Solution {
public:
    vector<vector<string>> result;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(board,0,0,n);
        return result;
    }
    bool isValid(vector<string> &board,int row,int col,int n){
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='Q') return false;
        }
        int j=col-1;
        for(int i=row-1;i>=0;i--){
            if(j>=0){
            if(board[i][j]=='Q') return false;
            j--;
            }
        }
         j=col+1;
        for(int i=row-1;i>=0;i--){
             if(j<=n){
            if(board[i][j]=='Q') return false;
            j++;}
        }return true;
    }
    void solve(vector<string> &board,int row,int col,int n){
        if(row>=n){
            result.push_back(board);
            return;
        }
        for(col=0;col<n;col++){
            if(isValid(board,row,col,n)){
            board[row][col]='Q';
            solve(board,row+1,col,n);
            board[row][col]='.';
            }

        }
    }
};