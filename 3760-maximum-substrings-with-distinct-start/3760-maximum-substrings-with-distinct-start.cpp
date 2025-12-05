class Solution {
public:
    int maxDistinct(string s) {
        vector<int> hash(26,0);
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<hash.size();i++){
            if(hash[i]!=0) ans++;
        }return ans;
    }
};