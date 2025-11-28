class Solution {
public:
    void reve(int i , int n, vector<char>& s){
        if(i>=n/2) return ;
        swap(s[i],s[n-i-1]);
        reve(i+1,n,s);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        reve(0,n,s);
    }
};