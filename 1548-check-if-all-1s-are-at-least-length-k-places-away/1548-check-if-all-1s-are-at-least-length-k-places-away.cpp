class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last= -1;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                if((i-last-1)<k && last!= -1){
                    return false; 
            } 
                last =i;
        }
        }return true;
    }
};