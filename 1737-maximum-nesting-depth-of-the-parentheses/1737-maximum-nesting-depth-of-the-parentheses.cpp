class Solution {
public:
    int maxDepth(string s) {
        int depth =0;
        int num = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') depth++;
            num=max(depth,num);
            if(s[i]==')') depth--;
        }return num;
    }
};