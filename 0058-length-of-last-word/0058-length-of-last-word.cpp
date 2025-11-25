class Solution {
public:
    int lengthOfLastWord(string s) {
        int count =0 ;
        for (int i = s.size()-1;i>=0;i--){
            if(s[i]==' ' && count ==0) continue;
        
            if(s[i]==' ' ) return count;
            count++;
        }return count;
    }
};