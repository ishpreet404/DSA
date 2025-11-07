class Solution {
public:
    int subtractProductAndSum(int n) {
        int x = n;
        int prod =1;
        int sum =0;
        while(x){
            prod*=x%10;
            sum+=x%10;
            x=x/10;
        }   return prod-sum;
    }
};