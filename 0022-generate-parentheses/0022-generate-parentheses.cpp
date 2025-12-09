class Solution {
public:
    void gen(int n,vector<string> &ans,string temp,int idx,int open , int close){
        if(idx>=2*n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
        temp.push_back('(');
        gen(n,ans,temp,idx+1,open+1,close);
        temp.pop_back();
        }
        if(close<open){
        temp.push_back(')');
        gen(n,ans,temp,idx+1,open,close+1);
        // temp="";
        temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp;
        gen(n,res,temp,0,0,0);
        // for(int q=0;q<ans.size();q++){
        // int count =0;

        //      bool valid = true;
        // for(int i=0;i<ans[q].size();i++){
        //     if(ans[q][i]=='('){
        //         count++;
        //     }
        //     if(ans[q][i]==')'){
        //         count--;
        //     }
        //     if(count < 0){
        //             valid = false;
        //             break;
        //         }
        return res;
            
        }
        // if(valid&& count==0) res.push_back(ans[q]);
};