class Solution {
public:
int m = 1000000007 ;
    int countGoodNumbers(long long n) {
      return   ((long long)power(5,(n+1)/2)*power(4,(n/2))) % m ;
        
    }
    int power(long long a,long long b){
        if(b==0) return 1;
        long long  half = power(a,b/2);
        long long  result= (half* half )% m;
        if(b%2==1){
              result =( result * a )% m;
        }
        return result;
    }
};