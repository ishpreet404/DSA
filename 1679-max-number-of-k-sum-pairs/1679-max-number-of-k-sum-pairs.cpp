class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int j=nums.size()-1;
        int i=0;
        int ans=0;
       while(i<j){
        if(nums[i]+nums[j]==k){
         ans++;
        i++;
        j--;
        continue;
        }
            
            if(nums[i]+nums[j]<k){
                i++;
            }else{
                j--;
            }
        }return ans;
    }
};