class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int key = original;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key){
                // nums[i]=nums[i]*2;
                key=key*2;
                i=-1;
            }
        }return key;
    }
};