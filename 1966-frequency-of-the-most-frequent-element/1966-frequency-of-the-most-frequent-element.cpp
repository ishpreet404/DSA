class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long res =0;
        sort(nums.begin(),nums.end());
        // int total = accumulate(nums.begin(),nums.end(),0);
        // int j=nums.size()-1;
        long long j=0;long long total=0;
        int i =0;
        while(j<nums.size()){
            total+=nums[j];
            while(nums[j]*(j-i+1)>total+k){
                total-=nums[i];
                i++;
            }
           res=max(res,j-i+1);
           j++;
        }
        return res;
    }
};