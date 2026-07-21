class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0 ,r = n -1,w,h,mx = 0,area;
        while( l < r){
            w = r - l;
            h = min(height[l],height[r]);
            area = w * h;
            mx = max(mx,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mx;
    }
};