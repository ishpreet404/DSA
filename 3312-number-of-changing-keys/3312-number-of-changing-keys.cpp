class Solution {
public:
    int countKeyChanges(string s) {
      
        int j=1;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            char temp =   tolower(s[i]);
            char temp2 = tolower(s[j]);
            if(temp!=temp2) ans++;
            j++;
        }return ans;
    }
};