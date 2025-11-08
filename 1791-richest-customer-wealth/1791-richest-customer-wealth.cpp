class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth =0;
        int temp=0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                    temp+=accounts[i][j];
            }wealth= max(wealth,temp);
            temp=0;
        }return wealth;
    }
};