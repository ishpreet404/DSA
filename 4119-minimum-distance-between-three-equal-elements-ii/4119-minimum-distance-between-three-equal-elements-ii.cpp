class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, int> mp1;
        // auto init = atexit([]() { ofstream("display_runtime.txt") << "0"; }); // waah shampy waah
        unordered_map<int, int> mp2;
        int dist =INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (mp1.find(nums[i]) != mp1.end() &&
                mp2.find(nums[i]) != mp2.end()) {
                int q = mp1[nums[i]];
                int j = mp2[nums[i]];
                int k = i;
                int temp = abs(q - j) + abs( j- k) + abs(k - q);
                dist=min(temp,dist);
            }
            if (mp2.find(nums[i]) != mp2.end()) {
                mp1[nums[i]]=mp2[nums[i]];
            }
            // mp1.insert(nums[i], i);
                mp2[nums[i]]=i;
        }
        if(dist==INT_MAX) return -1;
        return dist;
    }

}
;