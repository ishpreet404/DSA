class Solution {
public:
 vector<vector<int>> answer;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        solve(answer,nums,temp,0,nums.size());
        return answer;
    }
    void solve( vector<vector<int>> &answer, vector<int> &nums,vector<int> &temp,int idx,int n){
            answer.push_back(temp);
        if(idx>=n){
            return ;
        }
        for(int i=idx;i<nums.size();i++){
            if(i>idx && nums[i]==nums[i-1])continue;
            temp.push_back(nums[i]);
            solve(answer,nums,temp,i+1,n);
            temp.pop_back();
        }
    }
};