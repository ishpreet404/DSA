class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums1.size(); i++) mp[nums1[i]] = i;
 vector<int> ans(nums1.size(), -1);
        
        stack <int> mono;
        for(int i=nums2.size()-1;i>=0;--i){
            while(!mono.empty()&&mono.top()<=nums2[i]) {mono.pop();}
            if(mp.find(nums2[i])!=mp.end()){
                if(!mono.empty()) ans[mp[nums2[i]]]=mono.top();
            }mono.push(nums2[i]);
        }return ans;
    }
};