class Solution {
public:
    int beautySum(string s) {
        int beauty=0;
        int n = s.size();
        for(int i =0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=i;j<n;j++){
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