class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int sum = n*(n+1)/2;
                sort(nums.begin(), nums.end());

        int osum = accumulate(begin(nums),end(nums),0);
        
        // return {diff,diff+1};
        int count =0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
            count = nums[i];
            }
        }return {count,sum-(osum-count)};
    }
};