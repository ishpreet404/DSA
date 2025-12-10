class Solution {
public:
    unordered_set<int> colu ;
    unordered_set<int> diag ;
    unordered_set<int> antidiag;
    vector<vector<string>> result;
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(board,0,0,n);
        return result;
    }
 
    void solve(vector<string> &board,int row,int col,int n){
        if(row>=n){
            result.push_back(board);
            
        }
        for(col=0;col<n;col++){
            int diagel = row+col;
            int antidiagel =row-col;

            if(colu.find(col)!=colu.end() ||diag.find(diagel)!=diag.end()||antidiag.find(antidiagel)!=antidiag.end() ){
                continue;
            }
                colu.insert(col);
                diag.insert(row+col);
                antidiag.insert(row-col);
            board[row][col]='Q';
            solve(board,row+1,col,n);
            board[row][col]='.';
                colu.erase(col);
                diag.erase(row+col);
                antidiag.erase(row-col);
            

        }
    }
};