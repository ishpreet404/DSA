class Solution {
public:
    void reve(int i , int j, vector<char>& s){
        if(i>=j) return ;
        swap(s[i],s[j]);
        reve(i+1,j-1,s);
    }
    void reverseString(vector<char>& s) {
        int n = s.size();
        reve(0,n-1,s);
    }
};