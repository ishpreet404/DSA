class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int si= nums.size();
        int ta=si/2;
        vector<int> hash(10001,0);
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[i]==ta) return i;
        }return -1;
    }
};