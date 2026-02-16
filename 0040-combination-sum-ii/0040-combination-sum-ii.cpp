class Solution {
public:
    vector<vector<int>> answer;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(begin(candidates),end(candidates));
        vector<int> temp;
         gen(answer,candidates,temp,target,0);
         return answer;
    }
    void gen(vector<vector<int>> &answer,vector<int> &candidates,vector <int> &temp,int target,int idx){
        if(target==0){
            answer.push_back(temp);
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target) break;
            temp.push_back(candidates[i]);
            gen(answer,candidates,temp,target-candidates[i],i+1);
            temp.pop_back();
        }
    }
};