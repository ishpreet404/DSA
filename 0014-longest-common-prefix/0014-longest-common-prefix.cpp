class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs[0]=="") return "";
        string ans = "";
        int n =strs.size();
        for(int i=0;i<strs[0].size();i++){
            bool match = true ;
            char ch = strs[0][i];
            for(int j=1;j<n;j++){
                if(strs[j].size()<i || ch!=strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(match==false) break;
            ans.push_back(ch);
        }return ans;
    }
};