class Solution {
public:
    int minElement(vector<int>& nums) {
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int digi = nums[i];
                int sum =0;
                while(digi>0){
                sum+=digi%10;
                digi=digi/10;
            }
                if(min>sum) min=sum;
        }return min ;
    }
};