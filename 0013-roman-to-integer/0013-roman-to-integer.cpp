class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp={
             {'I',1}, {'V',5}, {'X',10}, {'L',50},
            {'C',100}, {'D',500}, {'M',1000}
        };
        int result=0;
        for(int i=0;i<s.size();i++){
            int curr =mp[s[i]];
            int temp=0;
            if (i+1<s.size()) {temp =mp[s[i+1]];}
            else temp=0;
            if(curr<temp){
                result-=curr;
            }else{
                result+=curr;
            }

        }return result;
    }
};