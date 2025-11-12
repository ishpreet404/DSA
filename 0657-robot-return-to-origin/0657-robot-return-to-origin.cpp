class Solution {
public:
    bool judgeCircle(string moves) {
        int u =0;
        int l =0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') u++;
            if(moves[i]=='D') u--;
            if(moves[i]=='L') l--;
            if(moves[i]=='R') l++;
        }if(u==0 && l ==0) return true;
        return false;
    }
};