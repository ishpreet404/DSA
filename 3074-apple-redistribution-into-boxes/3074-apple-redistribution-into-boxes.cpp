class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(begin(capacity),end(capacity));
        int sum = accumulate(begin(apple),end(apple),0);
        int ans=0;
        int boxes=0;
        for(int i =capacity.size()-1;i>=0;i--){
            boxes+=capacity[i];
            ans++;
            if(boxes>=sum) return ans;
        }return ans;
    }
};