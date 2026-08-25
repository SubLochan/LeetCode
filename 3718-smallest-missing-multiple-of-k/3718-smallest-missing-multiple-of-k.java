class Solution {
    public int missingMultiple(int[] nums, int k) {
        HashSet<Integer> hs = new HashSet<>();
        for(int el : nums)  hs.add(el);
        int n = 1;
        while(hs.contains(n *k)){
            n++;
        }
        return n * k;
    }
}