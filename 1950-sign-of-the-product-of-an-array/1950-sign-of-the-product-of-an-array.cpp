class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cp =0;
        int cm =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                return 0;
            }else if(nums[i]<0){
                cm++;
            }
        }if(cm%2==0) return 1;
         return -1;
    }
};