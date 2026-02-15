class Solution {
public:
   vector<vector<int>>  answer ;

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         genSubarray({}, 0, candidates.size(), answer,candidates,target);
         return answer;
    }

 void genSubarray(vector<int> temp,long long idx,int n,vector<vector<int>> &answer,vector<int> &nums,int target){
    int sum = accumulate(begin(temp),end(temp),0);
    if(sum>target){
        return;
    }
       if(idx == n ){
    if(sum==target)
        answer.push_back(temp);
    return;
}
        temp.push_back(nums[idx]);
        genSubarray(temp,idx,n,answer,nums,target);
        temp.pop_back();
         genSubarray(temp,idx+1,n,answer,nums,target);

    }
};
