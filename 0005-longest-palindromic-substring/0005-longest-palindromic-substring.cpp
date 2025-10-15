class Solution {
public:
    int t[1001][1001];
    string longestPalindrome(string s) {
    memset(t,-1,sizeof(t));
    int n = s.size();
    int maxlen =INT_MIN;
    int start =0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(solve(s,i,j)){
                if(j-i+1>maxlen){
                    maxlen=j-i+1;
                    start=i;
                }
            }
        }
    }
        return s.substr(start,maxlen);
    }
    bool solve(string &s ,int i,int j){
        if(i>=j) return 1;
        if(t[i][j]!=-1){
            return t[i][j];
        }
        if(s[i]==s[j]){
            return t[i][j]=solve(s,i+1,j-1);
        }else return 0;
    }
};