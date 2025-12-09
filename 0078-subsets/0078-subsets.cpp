class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
          vector<vector<int>> ans;
          vector <int> curr;
          int n=nums.size();
        solve(ans,0,curr,n,nums);
        return ans;
    }
    void solve(vector<vector<int>> &ans,int idx, vector<int> curr,int n,vector<int>& nums){
        if(idx>=n){
            ans.push_back(curr);
            return;
        }
        solve(ans,idx+1,curr,n,nums);
        curr.push_back(nums[idx]);
        solve(ans,idx+1,curr,n,nums);
    }
};