class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
               int sum = ans[ans.size()-1] + ans[ans.size()-2];
                ans.push_back(sum);
            }
            else if(operations[i]=="D"){
                ans.push_back(2 * ans.back());
            }
            else if(operations[i]=="C"){
                ans.pop_back();
            }
            else {
                ans.push_back(stoi(operations[i]));
            }
        }return accumulate(begin(ans),end(ans),0);
    }
};