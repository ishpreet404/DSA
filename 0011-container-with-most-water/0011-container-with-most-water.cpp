class Solution {
public:
    int maxArea(vector<int>& height) {
        int j=height.size()-1;
        int cand=INT_MIN;
        int low=0;
        int i=0;
        int area=INT_MIN;
        while(i<j){
            low=min(height[i],height[j]);
            area=low*abs(i-j);
            cand=max(area,cand);
            if(height[i]>=height[j])j--;
            else i++;
        }return cand;
    }
};