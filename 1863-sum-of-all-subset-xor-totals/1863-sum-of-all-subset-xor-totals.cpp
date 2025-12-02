class Solution {
public:
        int xortotal = 0;
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        tot(nums,0,temp);
            return xortotal;
    }
       void  tot(vector<int>& nums,int idx,vector<int> temp){
        if(idx==nums.size()){
           
       
        int tempxor=0;
        for(int i =0; i<temp.size();i++){
            tempxor^=temp[i];
        }
        xortotal+=tempxor;
         return ;
         }
        tot(nums,idx+1,temp);
        temp.push_back(nums[idx]);
        tot(nums,idx+1,temp);
    }
};