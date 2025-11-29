class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = accumulate (begin(nums),end(nums),0);
        int rem = sum % k;
        if(rem==0) return 0;
        else return rem;
    }
};