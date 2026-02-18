class Solution {
public:
 vector<vector<int>> answer;
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        vector<int> visited(n,0);
        solve(answer,nums,temp,0,n,visited);
        return answer;
    }
    void solve( vector<vector<int>> &answer, vector<int> &nums,vector<int> &temp,int idx,int n,vector<int> &visited){
       
        if(idx>=n){
            answer.push_back(temp);
            return ;
        }
        for(int i=0;i<nums.size();i++){
             if(visited[i]==0){
            temp.push_back(nums[i]);
            visited[i]=1;
            solve(answer,nums,temp,idx+1,n,visited);
            temp.pop_back();
            visited[i]=0;
        }
        }
    }
};