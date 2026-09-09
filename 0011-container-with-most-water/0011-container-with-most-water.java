class Solution {
    public int maxArea(int[] height) {
        int l = 0 , r = height.length - 1;
        int area = 0 , mx = 0;
        while(l < r){
            int w = r - l;
            int h = Math.min(height[l],height[r]);
            area = w * h;
            mx = Math.max(area,mx);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mx;
    }
}