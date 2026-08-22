class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<Integer>l1 = new ArrayList<>();
        List<Integer>l2 = new ArrayList<>();
        for(int i : nums1){
            if(!contains(nums2,i) && !l1.contains(i)){
                l1.add(i);
            }
        }
        for(int j : nums2){
            if(!contains(nums1,j) && !l2.contains(j)){
                l2.add(j);
            }
        }
        List<List<Integer>> res = new ArrayList<>();
        res.add(l1);
        res.add(l2);
        return res;
    }
    public static boolean contains(int[] arr,int x){
        for(int i : arr){
            if(i == x){
                return true;
            }
        }
        return false;
    }
}