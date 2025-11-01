class Solution {
public:
    int countDigits(int num) {
        int ans=0;
        int x =num;
        while(num){
            int temp = num%10;
            if(x%temp==0) ans++;
            num=num/10;
        }return ans;
    }
};