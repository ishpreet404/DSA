class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int c = *min_element(begin(nums),end(nums));
        int a =INT_MIN;
        int  b =INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=a){
                b=a;
                a=nums[i];
            }
            if(nums[i]>=b && nums[i]<a){
                b=nums[i];
            }
        }return a+b-c;
    }
};