class Solution {
public:
    string largestOddNumber(string num) {
        int size=num.size();
        for(int i=0;i<size;i++){
            if((num[num.size()-1]-'0')%2!=0) return num;
            num.pop_back();
        }
        return "";
    }
};