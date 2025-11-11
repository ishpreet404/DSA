class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9) {
                a+=nums[i];
            }else{
                b+=nums[i];
            }
        }return a!=b;
    }
};