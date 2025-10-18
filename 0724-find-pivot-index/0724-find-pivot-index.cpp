class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector <int> sumLeft(n,0);
        vector <int> sumRight(n,0);
        int j=nums.size()-2;
        sumLeft[0]=nums[0];
        sumRight[n-1]=nums[n-1];
        for(int i=1;i<nums.size();i++){
            sumLeft[i]=nums[i]+sumLeft[i-1];
            sumRight[j]=nums[j]+sumRight[j+1];
            j--;
        }
        for(int i=0;i<nums.size();i++){
            if(sumLeft[i]==sumRight[i])return i;
        }return -1;
    }
};