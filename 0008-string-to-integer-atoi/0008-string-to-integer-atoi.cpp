class Solution {
public:
    int myAtoi(string s) {
        long long result=0;
        int i =0;
        int n=s.size();
        while(i<n && s[i]==' '){
            i++;
        }
        int sign=0;
        if(s[i]=='-'){
        sign=1;
        i++;
        }
        else if(s[i]=='+'){
            i++;
        }    
        
       
        while(i<n && (s[i]>47 && s[i]<58)){
            if (sign == 0 && result*10 + (s[i]-'0') > INT_MAX) return INT_MAX;
            if (sign == 1 && result*-1*10 - (s[i]-'0' ) < INT_MIN) return INT_MIN;
                result= result*10 + s[i]-'0';
                i++;
        }
        if(sign==1) result=result*-1;
        return result;
    }
};