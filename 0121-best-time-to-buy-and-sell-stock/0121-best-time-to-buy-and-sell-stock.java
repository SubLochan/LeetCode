class Solution {
    public int maxProfit(int[] prices) {
        int mn = Integer.MAX_VALUE;
        int mx = 0; 
        for(int i = 0 ; i < prices.length ; i++){
            if(prices[i] < mn){
                mn = prices[i];
            }
           int pf = prices[i] - mn;
            mx = Math.max(mx,pf);
        }
        return mx;
    }
}