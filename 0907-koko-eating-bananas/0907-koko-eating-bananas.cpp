class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxel = *max_element(piles.begin(),piles.end());
        int low = 1;
        int high = maxel;
        while(low<=high){
            int mid = low + (high-low)/2;
            if (check(piles,mid,h)==true){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }return low;
    }
    bool check(vector<int> a , int f,int h){
        int n = a.size();
        long long  hours=0;
        for(int i =0;i<n;i++){
           hours+= ceil((double)a[i]/f);
        }
        if(hours>h) return false;
        return true;
    }
};