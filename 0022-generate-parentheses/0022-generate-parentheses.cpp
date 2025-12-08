class Solution {
public:
    void gen(int n,vector<string> &ans,string temp,int idx){
        if(idx>=2*n){
            ans.push_back(temp);
            return;
        }
        temp.push_back('(');
        gen(n,ans,temp,idx+1);
        temp.pop_back();

        temp.push_back(')');
        gen(n,ans,temp,idx+1);
        // temp="";
        temp.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        vector<string> res;
        string temp;
        gen(n,ans,temp,0);
        // int answer=0;
        for(int q=0;q<ans.size();q++){
        int count =0;

             bool valid = true;
        for(int i=0;i<ans[q].size();i++){
            if(ans[q][i]=='('){
                count++;
            }
            if(ans[q][i]==')'){
                count--;
            }
            if(count < 0){
                    valid = false;
                    break;
                }
            
        }if(valid&& count==0) res.push_back(ans[q]);
        }return res;
    }
};