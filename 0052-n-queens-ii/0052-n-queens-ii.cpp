class Solution {
public:
void solve(vector<string> &board,int row,int col,int n){
        if(row>=n){
            result++;
            
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
    };
unordered_set<int> colu ;
    unordered_set<int> diag ;
    unordered_set<int> antidiag;
    int  result=0;
    int totalNQueens(int n) { 
        vector<string> board(n,string(n,'.'));
        solve(board,0,0,n);
        return result;
}
};
    

    