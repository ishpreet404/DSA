class Solution {
public:
    int beautySum(string s) {
        int beauty=0;
        for(int i =0;i<s.size();i++){
            unordered_map<char,int> mp;
            for(int j=i;j<s.size();j++){
                mp[s[j]]++;
                int maxi=INT_MIN; int mini=INT_MAX;
                for(auto& it:mp ){
                if(it.second<=mini) mini=it.second;
                if(it.second>=maxi) maxi=it.second;
                }
                beauty+=maxi-mini;
            }
        }return beauty;

    }
};