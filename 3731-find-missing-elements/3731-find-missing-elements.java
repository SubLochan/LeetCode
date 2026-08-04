class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        List<Integer> res = new ArrayList();
        int mn = Arrays.stream(nums).min().getAsInt();
        int mx = Arrays.stream(nums).max().getAsInt();
        Set<Integer> st = new HashSet();
        for(int el : nums)  st.add(el);
        for(int i = mn ; i <= mx ; i++){
            if(!st.contains(i)){
                res.add(i);
            }
        }
        return res;
    }
}