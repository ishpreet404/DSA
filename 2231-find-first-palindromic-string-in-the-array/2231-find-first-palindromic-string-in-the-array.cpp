class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i =0;i<words.size();i++){
            if(check(words[i])) return words[i];
        }return "";
    }
    bool check(string &a){
        int i =0;
        int j = a.size()-1;
        while(i<=j){
            if(a[i]!=a[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};