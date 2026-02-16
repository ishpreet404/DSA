class Solution {
public:
   vector<vector<int>>  answer ;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
         genSubarray(temp, 0, candidates.size(), answer,candidates,target,0);
         return answer;
    }

 void genSubarray(vector<int> &temp,long long idx,int n,vector<vector<int>> &answer,vector<int> &nums,int target,int sum){
    // int sum = accumulate(begin(temp),end(temp),0);
    if(sum>target){
        return;
    }
       if(idx == n ){
    if(sum==target)
        answer.push_back(temp);
    return;
}
        temp.push_back(nums[idx]);
        sum+=nums[idx];
        genSubarray(temp,idx,n,answer,nums,target,sum);
        temp.pop_back();
        sum-=nums[idx];
         genSubarray(temp,idx+1,n,answer,nums,target,sum);

    }
};
