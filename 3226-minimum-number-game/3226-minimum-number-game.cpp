class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        int j=1;
        int minimum =INT_MAX;
        sort(begin(nums),end(nums));
        for(int i =0;i<nums.size()-1;i+=2){
           swap(nums[i],nums[j]);
           j+=2;
           }return nums;
        }
    
};