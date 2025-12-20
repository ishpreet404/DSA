class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(begin(potions),end(potions));
        vector<int> ans;
        for(int i=0;i<spells.size();i++){
            ans.push_back(bs(potions,success,spells[i],potions.size()));
        }
        return ans;
    }
        int bs(vector<int>& nums,long long k,int s,int size){
            int low =0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low + (high - low) / 2;
            if((long long)nums[mid]*s>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }return size-low;
        }
};