class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum = accumulate(begin(nums),end(nums),0);
        int digitsum =0;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            while(temp>0){
            digitsum+=temp%10;
            temp=temp/10;
            }
        }return elesum - digitsum;
    }
};